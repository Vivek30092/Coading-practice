#include <stdio.h>
#include <stdlib.h>

void square (int n);
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    square(n);
    return 0;
}

void square(int n){
    n=n*n;
    printf("squt is : %d ",n);
    
} 