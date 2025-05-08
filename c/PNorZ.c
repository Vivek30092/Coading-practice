#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("enter your number : ");
    scanf("%f",&a);
    if(a>0){
        printf("Positive number.");
        }
        else if(a<0){
            printf("Negative number.");
        }
    else {
        printf("Zero");
        }
    ;
    return 0;

}
