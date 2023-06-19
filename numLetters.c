#include <stdio.h>

int main(void){

  char letter[1] = "";
  char word[256] = "";

  int count = 0;
  int countLoop = 0;
  int i = 0;

  printf("Enter a word: ");
  scanf("%s", word);

  printf("\nEnter a letter: ");
  scanf("%s", letter);

  char *ptrWord = word;

  while (*ptrWord != 0){
    if (*ptrWord == letter[0]){
      count++;
    }
    printf("\n%c", *ptrWord);
    countLoop++;
    ptrWord++;
/*    if (countLoop == 256){
 *    break;
 *  }
 */
  }
  printf("\n%i, %i\n", count, countLoop);

  return 0;
}