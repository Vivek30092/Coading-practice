#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    do{
        printf("enter num :");
        scanf("%d",&n);

        if(n%7 ==0){
            break;
        }
    }while(1);
    printf("end");
    return 0;
}
