/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
example1.c (c) 2023
Desc: show examples of constants
Created:  2023-02-06T12:43:45.308Z
Modified: 2023-02-06T12:46:49.233Z
*/

#include <stdio.h>

// define method
#define CONSTANTS 5
#define FLOAT 9.3
#define CHAR 'A'

int main(int argc, char const *argv[])
{
  // in the function
  const int SIDE = 10;

  // print the constants
  printf("%d \n", CONSTANTS);
  printf("%f \n", FLOAT);
  printf("%c \n", CHAR);
  printf("%d \n", SIDE);

  return 0;
}
