#include <stdio.h>
#include "3-function_like_macros.h"
#include "3-function_like_macros.h"

/**
 * main - Checks the code
 * 
 * Return: Always 0.
 */
int main(void)
{
  int i;
  int j;

  i = ABS(-98);
  j = ABS(98) * 10;
  printf("%d, %d\n", i, j);
  return (0);
}

