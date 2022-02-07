#include <stdio.h>

void bubble(int*arr, int i){
    int j, k, first, second;
    for(j=0; j<=i; j++){
        for(k=0; k<=i-1; k++){
            first = *arr;
            arr++;
            second = *arr;
            if(first>second){
                *arr = first;
                arr--;
                *arr = second;
                arr++;
            }
            else{}
        }
    arr-=i;
    }

for(j=0; j<=i; j++){
    printf("%d  ", *arr);
arr++;
}
    printf("\n");
}

int main(){
    int arr[10] = {-1, 590, 0, -1001, 23, -78900, 2, 78, 111, 1198};
    bubble(arr, 9);
return 0;
}