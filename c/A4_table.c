#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d \n",i*num);
    }
    return 0;
}
