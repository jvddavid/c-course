/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: reads a number and prints if it is in the range of 0 to 10
Created:  2023-02-04T16:40:41.824Z
Modified: 2023-02-04T16:43:42.197Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a;

  printf("Type a number: ");
  scanf("%d", &a);

  if (a < 10 && a > 0)
  {
    printf("The number is in the range.");
  }
  else
  {
    printf("The number is out of range.");
  }

  return 0;
}
