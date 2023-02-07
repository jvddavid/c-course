/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex4.c (c) 2023
Desc: reads two numbers and prints if at least one is even.
Created:  2023-02-04T16:40:41.824Z
Modified: 2023-02-05T03:28:48.459Z
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

  if (a % 2 == 0 || b % 2 == 0)
  {
    if (a % 2 == 0)
    {
      printf("The number %d is a even number.\n", a);
    }
    else
    {
      printf("The number %d is a odd number.\n", a);
    }
    if (b % 2 == 0)
    {
      printf("The number %d is a even number.", b);
    }
    else
    {
      printf("The number %d is a odd number.", b);
    }
  }
  else
  {
    printf("All numbers is a odd number.");
  }

  return 0;
}
