#include <stdio.h>

int main () {
    int iNum = 0;

    printf ("Enter a number ");
    scanf ("%d", &iNum);

    printf ("You entered %d twice that is %d\n", iNum, iNum * 2);

    return 0;
}