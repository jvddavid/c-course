/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: decrement 50 with step 6 and print the values
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-05T20:05:16.770Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 50;

  while (i > 0)
  {
    printf("Value of i: %d\n", i);
    i -= 6;
  }

  return 0;
}
