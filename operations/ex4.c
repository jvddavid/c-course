/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex4.c (c) 2023
Desc: show the division of two numbers with 2 float digits
Created:  2023-02-04T02:23:44.158Z
Modified: 2023-02-04T02:30:17.918Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  // declare variables
  float a = 11.5;
  float b = 10.7;

  // divide the variables
  float result = a / b;

  // show result on console
  printf("Result: %.2f", result);

  return 0;
}
