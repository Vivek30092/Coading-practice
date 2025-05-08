//program to print number from 0 to  n , if n is given by the user 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0;
    printf("enter the number up to which you want to print : ");
    scanf("%d " ,&n);
    while(i<=n){
        printf(" %d \n" ,i);
        i++;
    }
    return 0;
}
