/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex3.c (c) 2023
Desc: read one number and print if are a even number
Created:  2023-02-04T02:44:37.973Z
Modified: 2023-02-04T16:35:31.746Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a;

  printf("Type the number: ");
  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("This number is a even number.");
  }
  else
  {
    printf("This number is a odd number.");
  }

  return 0;
}
