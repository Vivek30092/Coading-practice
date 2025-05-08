#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    for (int i=10;i>=1;i--){
        printf("%d \n",num*i);
    }
    return 0;
}
