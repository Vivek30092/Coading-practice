#include<stdio.h>

void square(int num);
void _square(int *num);

int main(){
    int n = 4;
    printf("number is : %d \n",n);
    square(n);
    printf("number is : %d \n",n);
    _square(&n);
    printf("number is : %d \n",n);

    return 0;
}

//call by value
void  square(int num){
    num = num*num;
    printf("square is %d \n",num);
}

//function call by reference
void _square(int *num){
    *num = (*num) * (*num);     //changing value to the pointer
    printf("square is %d \n", *num);
}