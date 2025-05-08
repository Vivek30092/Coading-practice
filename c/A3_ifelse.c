#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("enter your marks(1-100) : ");
    scanf("%d",&num);
    
    //(num>30) ? printf("Pass") : printf("Fail");
    if(num>30 && num<=100) {
        printf("pass.");
    }
        else if(num>=0 && num<30){
            printf("Fail");
        }
    
    else {
        printf("wrong number entered");
    }
    
    return 0;
}
