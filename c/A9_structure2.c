#include<stdio.h>

struct student
{
    char name[20];
    int rollNum;
    float cgpa;
};

int main(){
    struct student cse[100];
    strcpy(cse[0].name ,"vivek");
    cse[0].rollNum = 01;
    cse[0].cgpa=7.8;

    printf("name : %s \nroll number: %d\ncgpa: %f",cse[0].name,cse[0].rollNum,cse[0].cgpa);
    
    return 0;
}