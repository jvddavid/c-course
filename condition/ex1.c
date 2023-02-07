/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: read two numbers and print if the sum is greater than or equal the ten or smaller
Created:  2023-02-04T02:44:37.973Z
Modified: 2023-02-04T02:49:04.847Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;

  printf("Type the first number: ");
  scanf("%d", &a);
  printf("Type the second number: ");
  scanf("%d", &b);

  // sum the variables
  int result = a + b;

  if (result >= 10)
  {
    printf("The number is greater than or equal the 10.");
  }
  else
  {
    printf("The number is smaller than 10.");
  }

  return 0;
}
