#include<stdio.h>
int main(){
    char str[50];
    // scanf() can't input multi-word string with space
    /* gets(str);   dangerous and outdated and now not in use
        so inplace of gets now we use [fgets(str,n,file)]*/
    //gets(str);
    //fgets(str,n,file)    //important to use word stdin at place of file
                           //stops when n-1 chars input or now line is entered
    fgets(str,10,stdin);
    puts(str);
    return 0;
}