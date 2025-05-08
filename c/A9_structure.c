//struct hold data of different data type
#include<stdio.h>
#include<string.h>

//user defined
struct student
{
    char name[100];
    int rollNum;
    float CGPA;
};

int main(){
    struct student s1;
    s1.rollNum=1430;
    s1.CGPA = 5.6;
    //s1.name = "vivek";
    strcpy(s1.name,"vivek");

    printf("student name : %s \n",s1.name);
    printf("roll number : %d \n",s1.rollNum);
    printf("cgpa : %f \n",s1.CGPA);
    return 0;
}