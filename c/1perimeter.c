// program to get perimeter of rectangle by value entered by user
#include <stdio.h>                                      //preprocessor directive
#include <stdlib.h>                                     //standard lib

int main(){
    int l,b;
    printf("enter length : "); 
    scanf("%d",&l);                                     //getting length 
    printf("enter width : ");
    scanf("%d",&b);                                     //getting width
    printf("perimeter of rectangle is %d", 2*(l+b));    //using formula for perimeter
    return 0;
}
