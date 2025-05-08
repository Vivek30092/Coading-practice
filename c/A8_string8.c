//write a function to count the occurrence of vowel in a string
#include<stdio.h>
#include<string.h>

int vowel(char arr[]);
int main(){
    char str[200];
    printf("enter the string(upto 200 char): \n");
    gets(str);
    printf("the given string has %d vowels.",vowel(str));
    return 0;
}

int vowel(char str[]){
    int count = 0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count; 
}                  