//write a function to reverse an array.
#include<stdio.h>

void reverseArr(int arr[],int n);
void printArr(int arr[],int n);

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    reverseArr(arr,7);
    printArr(arr,7);
    return 0;
}

void reverseArr(int arr[],int n){
    for(int i = 0;i<n/2;i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

void printArr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}