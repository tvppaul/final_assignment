#include<stdio.h>
#include <stdlib.h>

char agesorting(int age1, int age2) {
  FILE *p1 = fopen("dataset.txt", "r");
  if(p1 == NULL) {
    printf("File cannot be read");
    return 0;
  }
  FILE *p2 = fopen("temp.txt", "w");
  if(p2 == NULL) {
    printf("There was an error");
    return 0;
  }
  // Trying to sort by age
int age;
  char c = fgetc(p1);
  char
  while(c != EOF) {
    while(c != 10) {
    if((c >= (age/10)) && (c <= 57))
    }
  }
}
//coi qsort of stdlib thu di Phuc!Up len github roi mai lam!
char weightsorting(float weighti, float weightf)
{
    FILE *p1 = fopen("dataset.txt", "r");
    if (p1 == NULL)
    {
        printf("File cannot be read\n");
        return -1;
    }

    FILE *p2 = fopen("temp.txt", "w");
    if (p2 == NULL)
    {
        printf("File cannot be open!\n");
        return -1;
    }

    float weight;


}
