/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex3.c (c) 2023
Desc: read two numbers, if them is in the range of 5 to 10, print the sum of them.
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-06T12:29:48.028Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num1, num2 = 6;

  while (!((num1 > 5 && num1 < 10) && (num2 > 5 && num2 < 10)))
  {
    printf("Type a number in the range of 5 to 10: ");
    scanf("%d", &num1);
    printf("Type a number in the range of 5 to 10: ");
    scanf("%d", &num2);

    if ((num1 > 5 && num1 < 10) && (num2 > 5 && num2 < 10))
    {
      printf("The sum of them is: %d\n", num1 + num2);
    }
    else
    {
      printf("The number is out of range.\n");
    }
  }

  return 0;
}
