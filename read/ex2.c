/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex2.c (c) 2023
Desc: read two numbers and print the result of multiply of them on the screen
Created:  2023-02-04T02:31:30.881Z
Modified: 2023-02-04T02:38:15.632Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float a, b;

  printf("Type the first number: ");
  scanf("%f", &a);
  printf("Type the second number: ");
  scanf("%f", &b);

  // multiply the variables
  float result = a * b;

  // show result on console
  printf("Result: %.2f", result);

  return 0;
}
