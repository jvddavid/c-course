/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: read two numbers and print the result of division of them on the screen
Created:  2023-02-04T02:31:30.881Z
Modified: 2023-02-04T02:35:40.580Z
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

  // divide the variables
  int result = a / b;

  // show result on console
  printf("Result: %d", result);

  return 0;
}
