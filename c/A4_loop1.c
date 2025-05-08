#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    int  fact=1;
    printf("enter number to get factorial of :");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("%d",fact);
    return 0;
}
