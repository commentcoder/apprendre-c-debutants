#include <stdio.h>

int main(void)
{
  int nombres[2][3] = {{4, 2, 3}, {9, 7, 6}};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", nombres[i][j]);
    }
    printf("\n");
  }
  return 0;
}