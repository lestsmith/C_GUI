#include <stdio.h>

int main (void)
{
  char str1[10] = "first";
  char str2[10] = "first";
  char *ptr1 = str1, *ptr2 = str2;

  while (*ptr1 != 0 && *ptr2 != 0)
  {
    printf("\n %s", ptr1);
    if (*ptr1 != *ptr2)
    {
      break;
    }
    ptr1++;
    ptr2++;
  }

  if (*ptr1 == 0 & *ptr2 ==0)
  {
    printf ("The two strings are identical.\n");
  }
  else
  {
    printf ("The two strings are different.\n");
  }
  return 0;
}