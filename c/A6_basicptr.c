#include<stdio.h>

int main(){
    //normal variable
    int age = 22;

    //variable storing address of age variable
    int *ptr = &age;

    // variable to store value of ptr value
    int _age = *ptr;     //value at address pointer
    
    
    // format specifier
    printf("%p \n",&age);
    printf("%d",*(&age));


    // syntax for pointer to pointer
    int **pptr;
    return 0;


}