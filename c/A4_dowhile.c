#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i=1;
    printf("enter the num :");
    scanf("%d" ,&num);
    do{
        printf("%d \n" , i*2);
        i++;
    }while(i<=num);
    return 0;
}
