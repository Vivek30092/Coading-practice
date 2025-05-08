#include<stdio.h>
int main(){

    //string can be change by using * or pointer variable
    char *canChange = "hello world";
    puts(canChange);
    canChange = "puhh! it's changed.";
    puts(canChange);

    //string can't be change if we use array to store the sting
    char cannotChange[] = "hello world";
    puts(cannotChange);
    // cannotChange = "hello";       //error: assignment to expression with array type {this error is encountered due to array notation which is not modifiable} 
    // puts(cannotChange);
    return 0;
}