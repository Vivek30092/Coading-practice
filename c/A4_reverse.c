#include <stdio.h>
#include <stdlib.h>

int main(){
    int i ,N;
    int num=0;
    printf("enter the number: ");
    scanf("%d",&N);
    for (i=0;i<=N;i++){
        num=num+i;
    }
    printf("sum is %d \n",num);
    printf("numbers in reverse order are :\n");
    for(i = N;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
