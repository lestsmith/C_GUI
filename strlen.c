#include <stdio.h>
#include <string.h>

int main (void)
{
  char str1[10] = "first";

  printf ("The length of the string %s is %d\n",
    str1, strlen(str1));

  return 0;  
}