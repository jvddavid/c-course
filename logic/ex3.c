/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex3.c (c) 2023
Desc: reads two numbers and prints if at least one is greater than 10.
Created:  2023-02-04T16:40:41.824Z
Modified: 2023-02-04T16:51:11.485Z
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

  if ((a > 10) || (b > 10))
  {
    printf("At least one is greater than 10.");
  }
  else
  {
    printf("All numbers is less than 10.");
  }

  return 0;
}
