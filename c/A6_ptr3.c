//program to calculate sum ,product and average of 2 numbers.
#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a = 5, b = 4;
    int sum, prod, avg;
    doWork(a,b, &sum, &prod, &avg);
    printf("sum = %d , product = %d, average = %d",sum,prod,avg);
    return 0;
}
void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2; 
}
