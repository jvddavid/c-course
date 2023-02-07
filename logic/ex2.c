/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex2.c (c) 2023
Desc: reads three numbers and prints if all is greater than 10.
Created:  2023-02-04T16:40:41.824Z
Modified: 2023-02-04T16:50:10.976Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b, c;

  printf("Type a number: ");
  scanf("%d", &a);
  printf("Type a number: ");
  scanf("%d", &b);
  printf("Type a number: ");
  scanf("%d", &c);

  if ((a > 10) && (b > 10) && (c > 10))
  {
    printf("The all numbers is greater than 10.");
  }
  else
  {
    printf("A number is less than 10.");
  }

  return 0;
}
