#include <stdio.h>

int main(void)
{
  int nombre;
  int terme1 = 0;
  int terme2 = 1;
  int nouveau_terme;

  printf("Entrez le nombre de termes à afficher : ");
  scanf("%d", &nombre);

  for (int i = 0; i < nombre; i++)
  {
    printf("%d ", terme1);
    nouveau_terme = terme1 + terme2;
    terme2 = terme1;
    terme1 = nouveau_terme;
  }

  return 0;
}