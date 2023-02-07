/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex1.c (c) 2023
Desc: play 3 dices and print the sum of them.
Created:  2023-02-05T19:40:40.396Z
Modified: 2023-02-05T20:01:37.039Z
*/

// include for printf
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int min, int max)
{
  int r = (rand() % (max - min)) + min;
  return r;
}

int main(int argc, char const *argv[])
{
  srand(time(NULL));

  int a, b, c;

  a = rand_int(1, 7);
  b = rand_int(1, 7);
  c = rand_int(1, 7);
  printf("The numbers is %d %d %d\n", a, b, c);

  int sum = a + b + c;

  printf("The sum is %d", sum);

  return 0;
}
