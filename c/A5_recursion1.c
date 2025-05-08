//sum of n natural number
#include <stdio.h>
#include <stdlib.h>
int sum(int n);

int main(){
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    printf("sum is : %d",sum (num));
    return 0;
}


//recursion function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);//sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

 