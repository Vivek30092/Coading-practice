#include <stdio.h>
#include <stdlib.h>
//i++ == use then increase {post increment}
//++i == first inc then use {pre increment}
// i-- == post decrement
// --i ==  pre increment
int main(){
    int i;
    for(i=0;i<=10;i++){   //i=i+1 == i+=1 ==i++
        printf(" %d ",i);
    }
    return 0;
}
