#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch<='Z'){
        printf("upper case letter. \n");
    }else if(ch>= 'a' && ch <= 'z'){
        printf("lower case letter.");
    }else{
        printf("not a valid character .");
    }
    return 0;
}
