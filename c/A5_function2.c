#include <stdio.h>
#include <stdlib.h>
 
 void indian();
 void french();
int main(){
    int n;
    printf("enter 1> for indian \n");
    printf("enter 2> for French \n");
    scanf("%d",&n);
    if(n==1){
        indian();
    }else if(n==2){
        french();
    }else{
        printf("invalid entery !!");
    }
    

    return 0;
}

void indian(){
    printf("Namaste \n");
}
void french(){
    printf("Bonjour \n");
}
