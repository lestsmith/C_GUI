#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char *str;
  char *strNoSpaces;
  int i;
  int size;
  int mid;
  
  str = malloc(sizeof(char) * 255);
  strNoSpaces = malloc(sizeof(char) * 255);
  
  // Clear the screen
  printf("\e[1;1H\e[2J");
  
  printf("Enter a string : ");
  scanf("%[^\n]s",str);
  
  size = strlen(str);
  
  // Remove an spaces from the entered string
  // would be better as a function
  int j = 0;
  for (i = 0; i < size; i++){
    if (!isspace(str[i])){
      strNoSpaces[j++] = str[i];
    }
  }
  strNoSpaces[j] = '\0';
  
  size = strlen(strNoSpaces);
  
  for(i = 0; i < size/2 ;i++){
    if(tolower(strNoSpaces[i]) != tolower(strNoSpaces[size - 1 -i])){
      printf("Entered string %s is Not a palindrome.\n", strNoSpaces);
      break;
    }
  }
  
  if(i==size/2){
    printf("Entered string %s is a palindrome.\n", strNoSpaces);
  }
  
  free(str);
  free(strNoSpaces);

}