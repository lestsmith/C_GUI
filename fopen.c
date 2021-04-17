#include <stdio.h>
  
void main (void)
{
  FILE *fp;
  int value;
  fp = fopen ("/Users/les/Documents/input.txt", "rb"); 
  if (fp)
  {
    while (1) 
    {
      value = fgetc (fp);
      if (value == EOF) break; 
      else printf ("%c", value);
    }
      fclose (fp);
  }
}