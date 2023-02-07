/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex6.c (c) 2023
Desc: read a max, min and step numbers and print all numbers in the range.
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-06T12:42:04.230Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{

  int max, min, step;
  printf("Type max number: ");
  scanf("%d", &max);
  printf("Type min number: ");
  scanf("%d", &min);
  printf("Type step number: ");
  scanf("%d", &step);

  for (int i = min; i <= max; i += step)
  {
    printf("Number: %d\n", i);
  }

  return 0;
}
