#include <stdio.h>

int main(void){

  char letter[1] = "";
  char word[256] = "";

  int count = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  printf("\nEnter a letter: ");
  scanf("%s", letter);

  char *ptrWord = word;

  while (*ptrWord != 0){
    if (*ptrWord == letter[0]){
      count++;
    }
    ptrWord++; // important; to move the loop to the next address
  }
  printf("\n%i, %i\n", count);

  return 0;
}