#include <stdio.h>

int main(void){

  char letter[1] = "";
  char word[30] = "";

  int count = 0;
  int i = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  printf("\nEnter a letter: ");
  scanf("%s", letter);

  for (i = 0; i < 30; i++){
    if (word[i] == letter[0]){
      count++;
    }
  }

  printf("\n%i\n", count);

  return 0;
}