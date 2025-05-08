#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("enter your marks in percentage : ");
    scanf("%f",&a);
    if(a>45){
        if(a>80) printf("grade 'A' ");
        else if (a>60) printf("grade 'B' ");
        else printf("grade 'C'");
        }
    else printf("you failed !!");
    return 0;
}
