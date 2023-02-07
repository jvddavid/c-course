/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex3.c (c) 2023
Desc: read two char and print the result on the screen
Created:  2023-02-04T02:31:30.881Z
Modified: 2023-02-05T03:35:06.902Z
*/

// include for printf
#include <stdio.h>

int main(int argc, char const *argv[])
{
  char a, b;

  printf("Type the first char: ");
  scanf("%c", &a);
  fflush(stdin);
  printf("Type the second char: ");
  scanf("%c", &b);
  fflush(stdin);

  // create a vector of char with two char
  char result[2] = {a, b};

  // show result on console
  printf("Result: %c%c", result[0], result[1]);

  return 0;
}
