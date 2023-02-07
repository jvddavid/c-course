/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: read two numbers and show options of sum and subtract, based on the option show the result, use a switch to option.
Created:  2023-02-05T03:34:56.833Z
Modified: 2023-02-05T03:41:41.154Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;

  printf("Type a number: ");
  scanf("%d", &a);
  printf("Type a number: ");
  scanf("%d", &b);

  int option;
  printf("Select:\n 1 - Sum\n 2 - Subtract\nOption: ");
  scanf("%d", &option);
  int sum, subtract;
  switch (option)
  {
  case 1:
    sum = a + b;
    printf("The sum of them is %d.", sum);
    break;

  default:
    subtract = a - b;
    printf("The subtract of them is %d.", subtract);
    break;
  }

  return 0;
}
