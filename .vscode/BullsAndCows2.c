#include <stdio.h>
#include <stdlib.h>

int main()
{
int secret_numbers[4];  
int player_one_numbers[4];
int player_two_numbers[4];

int player_bulls = 0;
int player_cows = 0;

  printf("=====================================\n");
  printf("===== BULL AND COWS v2.0  by DxTR====\n");
  printf("=====================================\n");
  printf("=     MASTER ENTER SECRET NUMBER    =\n");
  printf("=PAYER2 1 ENTER NUMBERS  PREDICTIONS=\n");
  printf("=PAYER2 2 ENTER NUMBERS  PREDICTIONS=\n");
  printf("==================================-==\n");
  printf("\n");

  




  int player_id = 0;
  for (int play = 0; play < 2; play++)
  {
    for (int i = 0; i < 4; i++)
    {
      if (player_id == 0)
      {
        printf("====PLAYER ONE - ENTER NUMBER FROM 0 to 9====DIGIT:%d\n", i + 1);
        scanf("%1d", &player_one_numbers[i]);
        if (i > 0)
      {
        for (int j = i; j > 0; j--)
        {
          if (j == player_one_numbers[i])
          {
            printf("===ERROR SAME NUNBER===");
            return 0;
          }
        }
      }
      }
      else
      {
        printf("====PLAYER TWO - GUESS NUMBER FROM 0 to 9====DIGIT:%d\n", i + 1);
        scanf("%1d", &player_two_numbers[i]);
        if (i > 0)
      {
        for (int j = i; j > 0; j--)
        {
          if (j == player_two_numbers[i])
          {
            printf("===ERROR SAME NUNBER===");
            return 0;
          }
        }
      }
      }

      
    }
    player_id++;
    if (player_id > 1)
    {
      player_id = 0;
    }
  }
  
  printf("PLAYER ONE NUMBERS: ");
  for (int loop = 0; loop < 4; loop++)
    printf("%d ", player_one_numbers[loop]);
  printf("\n");

  printf("PLAYER TWO NUMBERS: ");
  for (int loop = 0; loop < 4; loop++)
    printf("%d ", player_two_numbers[loop]);

  printf("\n");
  printf("B==BULLS    C==COWS ");
  for (int bulls = 0; bulls < 4; bulls++)
  {
    if (player_one_numbers[bulls] == player_two_numbers[bulls])
    {
      printf("B ");
      ++player_bulls;
    }
    else
    {
      for (int cows = 0; cows < 4; cows++)
      {
        if (player_one_numbers[bulls] == player_two_numbers[cows])
        {
          printf("C ");
          ++player_cows;
        }
      }
    }
  }
  printf("\n");
  printf("PLAYER 2 GUESSED :\n");
  printf("COWS  :%d\n", player_cows);
  printf("BULLS :%d\n", player_bulls);

  return 0;
}
