#include<stdio.h>
int main(){
    int arr[3];
    printf("enter your marks for...\n");
    printf("maths: ");
    scanf("%d",&arr[0]);
    printf("physics: ");
    scanf("%d",&arr[1]);
    printf("chemistry: ");
    scanf("%d",&arr[2]);

    printf("number are %d,%d,%d",arr[0],arr[1],arr[2]);

}