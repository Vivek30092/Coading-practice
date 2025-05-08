//WA function to count the number of odd number in an array.
#include<stdio.h>

int countOdd(int arr[],int n);

int main(){
    int arr[]={34,53,43,55,33,223,56,43,22,566};
    printf("total odd numbers in given array is : %d",countOdd(arr,10));    
    return 0;
}
int countOdd(int arr[],int n){
    int count = 0;
    for (int i=0;i<n;i++){
        if (arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}