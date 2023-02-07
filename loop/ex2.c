/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex2.c (c) 2023
Desc: read a number greater than 10, and print all even numbers in the range of 10 to read number.
Created:  2023-02-05T20:01:33.348Z
Modified: 2023-02-06T00:06:58.381Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int read_num;

  printf("Type a number greater than 10: ");
  scanf("%d", &read_num);

  int num = 10;
  int i = 1;

  while (num <= read_num)
  {
    printf("%d -> %d\n", i, num);
    num += 2;
    i++;
  }

  return 0;
}
