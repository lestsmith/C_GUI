#include <stdio.h>
#include <time.h>

int main()
{
  time_t s, val = 1;
  struct tm* current_time;
  
  s = time(NULL);
  
  current_time = localtime(&s);
  printf("\e[1;1H\e[2J"); // Clear the screen.
  
  printf("Day of the month = %d\n",current_time->tm_mday);
  printf("Month of this year = %d\n",(current_time->tm_mon + 1));
  printf("Current year = %d\n\n",(current_time->tm_year + 1900));
  printf("Day in this year = %d\n",current_time->tm_yday);
  printf("Day in this week = %d\n",current_time->tm_wday);
  printf("Current Week Number = %d\n\n", (current_time->tm_wday + current_time->tm_yday) / 7);
  printf("Current Time = %02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
  
  return 0;
}