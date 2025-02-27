#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_file(const char *input_file) {
    char output_file[256];
    strncpy(output_file, input_file, sizeof(output_file) - 1);
    output_file[sizeof(output_file) - 1] = '\0';
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
        perror("Nema fail ili si izbral gre6en fail!");
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
    printf("File processed successfully: %s\n", output_file);
}

int main(int argc, char *argv[]) {
    printf("=================================================================\n");
    printf("=              Kolio RC file format converter v1.4              =\n");
    printf("=       Izpolzvai taka: KolioRC-FFC01.exe <vhoden_fail.txt>     =\n");
    printf("= Konvertira faila kakto Kolio iska, ama dobavia sled nego XXX. =\n\n");
    printf("=================================================================\n");
    if (argc != 2) {
        fprintf(stderr, "Gre6ka: nevalidno izpolzane (vij adjaba kakvo si dal na softa da obrabotva).\n");
        return EXIT_FAILURE;
    }
    
    process_file(argv[1]);
    return EXIT_SUCCESS;
}
