#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

void process_file(const char *input_file) {
    char output_dir[] = "ConverteddDataFiles_";
    mkdir(output_dir);
    
    char output_file[256];
    snprintf(output_file, sizeof(output_file), "%s/%s", output_dir, input_file);
    
    char *dot = strrchr(output_file, '.');
    if (dot) {
        memmove(dot + 3, dot, strlen(dot) + 1);
        memcpy(dot, "XXX", 3);
    } else {
        strncat(output_file, "XXX", sizeof(output_file) - strlen(output_file) - 1);
    }
    
    FILE *in = fopen(input_file, "r");
    FILE *out = fopen(output_file, "w");
    
    if (!in || !out) {
        perror("Error opening file!");
        exit(EXIT_FAILURE);
    }
    
    char line[256];
    while (fgets(line, sizeof(line), in)) {
        if (strstr(line, "AT:") && strstr(line, "RH:")) {
            float at, rh;
            sscanf(line, "AT: %f RH: %f", &at, &rh);
            fprintf(out, "AT:   %.1f\nRH:   %.1f\n", at, rh);
        } else if (strstr(line, "DP:") && strstr(line, "WB:")) {
            float dp, wb;
            sscanf(line, "DP: %f WB: %f", &dp, &wb);
            fprintf(out, "DP:   %.1f\nWB:   %.1f\n", dp, wb);
        } else {
            fprintf(out, "%s", line);
        }
    }
    
    fclose(in);
    fclose(out);
    printf("File conversion successful: %s\n", output_file);
}

int main() {
    printf("=========================================================\n");
    printf("=    ██████╗ ██╗  ██╗████████╗██████╗            V2.1   =\n");
    printf("=    ██╔══██╗╚██╗██╔╝╚══██╔══╝██╔══██╗                  =\n");
    printf("=    ██║  ██║ ╚███╔╝    ██║   ██████╔╝                  =\n");
    printf("=    ██║  ██║ ██╔██╗    ██║   ██╔══██╗                  =\n");
    printf("=    ██████╔╝██╔╝ ██╗   ██║   ██║  ██║                  =\n");
    printf("=    ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝                  =\n");
    printf("=   ███╗   ██╗██╗██╗  ██╗██╗    ██████╗  ██████╗        =\n");
    printf("=   ████╗  ██║██║██║ ██╔╝██║    ██╔══██╗██╔════╝        =\n");
    printf("=   ██╔██╗ ██║██║█████╔╝ ██║    ██████╔╝██║             =\n");
    printf("=   ██║╚██╗██║██║██╔═██╗ ██║    ██╔══██╗██║             =\n");
    printf("=   ██║ ╚████║██║██║  ██╗██║    ██║  ██║╚██████╗        =\n");
    printf("=   ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝╚═╝    ╚═╝  ╚═╝ ╚═════         =\n");
    printf("=                                                       =\n");
    printf("=  Niki RC / DxTR data conversion program for           =\n");
    printf("=  Trotec PC220 generated files                         =\n");
    printf("=  program scan current directory for all  .txt files   =\n");
    printf("=  converted files are located in: ConverteddDataFiles_ =\n");
    printf("=========================================================\n");
    printf("\n");

    printf("Scanning for .txt files...\n");
    
    DIR *d = opendir(".");
    if (!d) {
        perror("Error opening directory!");
        return EXIT_FAILURE;
    }
    
    struct dirent *dir;
    while ((dir = readdir(d)) != NULL) {
        if (strstr(dir->d_name, ".txt")) {
            process_file(dir->d_name);
        }
    }
    
    closedir(d);
    printf("Conversion successful !\n");
    return EXIT_SUCCESS;
}
