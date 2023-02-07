/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex4.c (c) 2023
Desc: print the sum of the all number in the range of 0 to 10, incrementing the sum.
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-06T12:35:46.294Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Sum %d -> %d\n", i, sum);
    sum += i;
  }

  return 0;
}
