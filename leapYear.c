#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

bool leapYear(int iYear);

int main(int argc, char **argv){
    int iYr = 0;
    char* verb = "was";

    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);

    if (argv[1] != NULL){
        iYr = atoi(argv[1]);
    } 

    if (iYr == 0) {
        iYr = (current_time->tm_year + 1900);
    }

    if (iYr == current_time->tm_year + 1900){
        verb = "is";
    }

    bool ly = leapYear(iYr);
    if (ly){
        printf("The year %d %s a leap year\n", iYr, verb);
    } else {
        printf("The year %d %s NOT a leap year\n", iYr, verb);
    }
    return 0;
}

bool leapYear(int iYear){    
    if (iYear % 400 == 0){
        return true;
    }
    if (iYear % 100 == 0){
        return false;
    }
    if (iYear % 4 == 0){
        return true;
    }
    return false;
}