//factorial of n
#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main(){
   printf("fact is %d :" ,fact(3));
   return 0;
}

int fact(int n){ 
    if(n==1){
        return 1;
    }
    int factNt1 = fact(n-1);
    int factN = factNt1*n;
    return factN;
}

 