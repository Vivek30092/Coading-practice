#include <stdio.h>
#include <stdlib.h>
//declaration/prototype
void printhello();

int main(){
    printhello();  //function call
    printhello();  //function call
    printhello();  //function call
    return 0;
}

//function definition
void printhello(){
    printf("hello \n");
    printf("good night \n");
}