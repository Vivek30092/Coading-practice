#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,c;
    printf("enter number of rows :");
    scanf("%d",&r);
    printf("enter number of column :");
    scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
