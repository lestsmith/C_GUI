#include <stdio.h>

int main (void)
{
  int a = 5;
  switch (a)
  {
    case 0 : printf ("a is equal to 0\n");
    break;
    case 1 : printf ("a is equal to 1\n");
    break;
    default : printf ("a is greater than 1\n");
  }
}