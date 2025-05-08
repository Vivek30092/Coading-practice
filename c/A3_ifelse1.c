#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("enter your marks :");
    scanf("%d", &num);
    if(num>=0 && num <30){
        printf("C");
    }else if (num >= 30 && num < 70){
        printf("B");
    }else if(num >= 70 && num < 90){
        printf("A");
    }else if(num >= 90 && num <= 100){
        printf("A+");
    }else{
        printf("enter valid marks(0-100). ");
    }
    
    return 0;
}
