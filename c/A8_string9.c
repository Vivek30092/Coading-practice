//check if a given "character" is present in a string or not.
#include<stdio.h>
#include<string.h>

char check(char arr[],char ch);

int main(){
    char str[100];
    char ch;
    printf("enter a string: \n");
    gets(str);
    printf("enter character to search: ");
    scanf("%c",&ch);
    printf("%c",check(str,ch));
    return 0;
}

char check(char arr[],char ch){
    for (int i=0;arr[i]!='\0';i++){
        if (arr[i]==ch){
            return 'Y';
            }else{
                return 'N';
            }
        }
    }

