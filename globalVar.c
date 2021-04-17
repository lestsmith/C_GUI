#include <stdio.h>

int result;

void add (int a, int b)
{
  result = a + b;
}

int main (void)
{
  add (3, 4);
  printf ("The result is %d\n", result);
}