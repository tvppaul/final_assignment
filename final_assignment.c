#include<stdio.h>
#include <stdlib.h>

char agesorting(int age1, int age2) {
  FILE *p1 = fopen("dataset.txt", "r");
  if(p1 == NULL) {
    printf("File cannot be read");
    return 0;
  }
int age;
  fscanf(p1, "%i", &age)
}

char weightsorting(float weighti, float weightf)
{
    FILE *p1 = fopen("dataset.txt", "r");
    if (p1 == NULL)
    {
        printf("File cannot be read\n");
        return -1;
    }
    if (/* condition */) {
        /* code */
    }
}
