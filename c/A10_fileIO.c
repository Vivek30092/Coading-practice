#include<stdio.h>
int main(){
    FILE *fptr;    //file pointer
    fptr = fopen("Text.txt","w") ;   //opening a file



    //reading from file
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character : %c",ch);

    //writing to a file
    // fprintf(fptr,"%c",'F');

    
    
    if (fptr == NULL){
        printf("file does't exist...\n");
    }else{
        fclose(fptr);                   //closing a file
    }
    return 0;

}