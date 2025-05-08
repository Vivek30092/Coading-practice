//WAP to store the first n fibonacci number
//0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946
#include<stdio.h>
int main(){
    int n ;
    printf("enter the number of terms have to print: ");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    if(n==0){
        printf("%d",fib[0]);
    }else if (n==1){
        printf("%d,",fib[0]);
        printf("%d",fib[1]);
    }else{
        printf("%d,",fib[0]);
        printf("%d,",fib[1]);
    for(int i=2;i<n;i++){
        fib[i] = fib[i-1] + fib[i-2];
        if(i==(n-1)){
            printf("%d",fib[i]);
        }else{
            printf("%d,",fib[i]);
        }
    }}
    printf("\n");
    return 0;
}