#include <stdio.h>

void insertion(int*arr, int i){
    int j, k, percede, whereRTnow;
    for(j=0; j<=i; j++){
            arr+=j;
            whereRTnow = *arr;
        for(k=0; k<=j; k++){
    if(j!=0){
    arr--;
    percede = *arr;
    arr++;}
            if(whereRTnow<percede){
                *arr = percede;
                arr--;
                *arr = whereRTnow;
            }
        }
    }
}

int main(){
    int arr[4] = {-101, 89, 0, 90199};
insertion(arr, 3);
    return 0;
}