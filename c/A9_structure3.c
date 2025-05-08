/*
Passing structure to function....
//Function prototype
void printInfo(struct student s1);
*/
#include<stdio.h>
#include<string.h>

//user defined 
struct student
{ 
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {"vivek",27,5.7};
    printInfo(s1);
    
    return 0;
}

void printInfo(struct student s1){
    printf("student information\n");
    printf("name : %s\n",s1.name);
    printf("rollNo. : %d\n",s1.roll);
    printf("cgpa : %f\n",s1.cgpa);
}