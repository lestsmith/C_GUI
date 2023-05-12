#include <stdio.h>

int main(){
    int arrayList[] = {1,9,4,7,5,6,3,8,2};

    for (int i = 0; i < 9; i++){
        for (int j = i + 1; j < 9; j++){
            if (arrayList[j] < arrayList[i]){
                int tmp = arrayList[j];
                arrayList[j] = arrayList[i];
                arrayList[i] = tmp;
            }
        }
    }
    for (int k = 0; k < 9; k++){
        printf("%d\n", arrayList[k]); 
    }
}