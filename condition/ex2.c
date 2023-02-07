/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex2.c (c) 2023
Desc: read two numbers and print the greater of them or if are equals
Created:  2023-02-04T02:44:37.973Z
Modified: 2023-02-04T16:31:49.542Z
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

  if (a > b)
  {
    printf("The number %d is greater than %d.", a, b);
  }
  else if (b > a)
  {
    printf("The number %d is greater than %d.", b, a);
  }
  else
  {
    printf("The number %d is equal the %d.", a, b);
  }

  return 0;
}
