#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("enter your age : ");
    scanf("%d",&age);     
    (age>=18)? printf("you are eligible to vote. \n") : printf("you are't eligible to vote. \n");  //ternary operator
    printf("Thank You.");
    return 0;
}
