/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex5.c (c) 2023
Desc: read a number and print the multiplication of the number and the range of 1 to 10.
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-06T12:38:05.174Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{

  int num;
  printf("Type a number: ");
  scanf("%d", &num);

  for (int i = 1; i < 11; i++)
  {
    printf("%d x %d -> %d\n", num, i, num * i);
  }

  return 0;
}
