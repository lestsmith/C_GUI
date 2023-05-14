#include <stdio.h>

void bubbleSort(int myNumbers[], int len);

int main() {
  int myNumbers[] = {30, 50, 20, 40, 10, 60}; 
  int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
  int arrayList[len];
  printf("%d\n\n", len);
  bubbleSort(myNumbers, len);
  for (int i = 0; i < len; i++) {
    printf("%d\n", myNumbers[i]);
  }
  return 0;
} 

void bubbleSort(int myNumbers[], int len) {
  for (int i = 0; i < len; i++) {
    for (int k = i + 1; k < len; k++){
      if (myNumbers[k] < myNumbers[i]){
          int tmp = myNumbers[k];
          myNumbers[k] = myNumbers[i];
          myNumbers[i] = tmp;
      }
    }
  }
}