/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
example1.c (c) 2023
Desc: description
Created:  2023-02-14T11:51:34.435Z
Modified: 2023-02-14T11:54:02.867Z
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
