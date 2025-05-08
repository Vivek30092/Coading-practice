//write a function named slice, which takes a string & returns a sliced string from index n to m.
#include<stdio.h>
#include<string.h>

void slice(char arr[],int start,int end);

int main(){
    int start,end;
    char str[100];
    printf("enter your string: \n");
    gets(str);
    printf("enter starting point: ");
    scanf("%d",&start);
    printf("enter ending point: ");
    scanf("%d",&end);
    slice(str,start,end);

    
    return 0;
}

void slice(char str[],int start ,int end){
    char newStr[end-start+1];
    int j = 0;
    for(int i = start;i<=end;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0'; 
    puts(newStr);
}