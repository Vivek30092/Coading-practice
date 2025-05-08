#include<stdio.h>
#include<string.h>

int  countLength(char arr[]);

int main(){
    char name[20];
    printf("enter your full name without space between name and surname: ");
    fgets(name,20,stdin);
    //printf("Length is : %d \n",countLength(name));
    int length = strlen(name);
    printf("length of string is : %d\n",length);
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i = 1;arr[i] != '\0';i++){
        count++;
    }
    return count;
}