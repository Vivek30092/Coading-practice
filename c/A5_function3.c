#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b);                 //parameter

int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    int s=sum(a,b);                  //arguments
    printf("sum is : %d",s);
    
    return 0;
}

int sum(int a, int b){
    return a+b;
}


