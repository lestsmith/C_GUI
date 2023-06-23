#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool leapYear(int iYear);

int main(int argc, char **argv){
  int iYr = 0;
  char* verb = "";

  if (argv[1] != NULL){
    iYr = atoi(argv[1]);
  } 

  if (iYr == 0) {
    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);
    iYr = (current_time->tm_year + 1900);
  }

  if (leapYear(iYr)){
    verb = "is a";
  } else {
    verb = "is NOT a";
  }
    
  printf("The year %d %s leap year\n", iYr, verb);

  return 0;
}

bool leapYear(int iYear){    
  return (((iYear) % 4 == 0 && (iYear % 100 != 0)) || (iYear % 400 == 0));
}