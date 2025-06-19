#include <stdio.h>

struct Contact
{
  char prenom[50];
  char telephone[20];
  int age;
};

int main(void)
{
  struct Contact contacts[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Entrez un prénom %d : ", i + 1);
    scanf("%s", contacts[i].prenom);

    printf("Entrez un numéro de téléphone %d : ", i + 1);
    scanf("%s", contacts[i].telephone);

    printf("Entrez un age %d : ", i + 1);
    scanf("%d", &contacts[i].age);
  }

  printf("\n----- Liste de contact ----- \n");
  for (int i = 0; i < 3; i++)
  {
    printf("Contact %d :\n", i + 1);
    printf("Prénom : %s\n", contacts[i].prenom);
    printf("Numéro : %s\n", contacts[i].telephone);
    printf("Age : %d\n", contacts[i].age);
  }

  return 0;
}