/*
Author: João Victor David de Oliveira (j.victordavid2@gmail.com)
ex5.c (c) 2023
Desc: reads two numbers and prints if the sum of them is in the range of 0 to 10 or the sum is a even number.
Created:  2023-02-04T16:40:41.824Z
Modified: 2023-02-05T03:33:00.452Z
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

  int sum = a + b;

  if ((sum > 0 && sum < 10) || (sum % 2 == 0))
  {
    if (sum % 2 == 0)
    {
      printf("The number %d is a even number.\n", sum);
    }
    if (sum > 0 && sum < 10)
    {
      printf("The number %d is in the range of 0 to 10.", sum);
    }
  }
  else
  {
    printf("All numbers is a odd number.");
  }

  return 0;
}
