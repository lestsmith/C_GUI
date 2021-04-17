#include <stdio.h>

int main (void)
{
    FILE *fp;

    fp = fopen ("/Users/les/Documents/input.txt", "ab");
    
    if (fp)
    {
        fprintf (fp, "This is some more text.\n");
        fclose(fp);
    }
}