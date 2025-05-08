#include <stdio.h>
#include <stdlib.h>

int main(){
    // int num;
    // printf("enter random numbers :");
    // do{
    //     scanf("%d",&num);
    // } while (num%2 == 0);
    // printf("you entered odd number . \n");
    // printf("program end.");
  
    int n;
    do{
        printf("enter number :");
        scanf("%d",&n);
        printf("%d \n",n);

        if(n%2 != 0){
            break;
        }
        }while(1);
    
        printf("program end ."); 

    
    return 0;
}
