#include <stdio.h>

struct Student
{
  char prenom[50];
  int age;
  float notes[10];
};

int main(void)
{
  struct Student s1;

  printf("Entrez un prénom : ");
  scanf("%s", s1.prenom);

  printf("Entrez un age : ");
  scanf("%d", &s1.age);

  printf("Prénom : %s\n", s1.prenom);
  printf("Age : %d\n", s1.age);

  return 0;
}