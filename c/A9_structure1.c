#include<stdio.h>
#include<string.h>

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
    printf("cgpa : %f \n\n",s1.CGPA);

    struct student s2;
    s2.rollNum=14;
    s2.CGPA = 5.8;
    //s1.name = "vivek";
    strcpy(s2.name,"rajkumar");

    printf("student name : %s \n",s2.name);
    printf("roll number : %d \n",s2.rollNum);
    printf("cgpa : %f \n\n",s2.CGPA);

    struct student s3;
    s3.rollNum=30;
    s3.CGPA = 8.9;
    //s1.name = "vivek";
    strcpy(s3.name,"golu");

    printf("student name : %s \n",s3.name);
    printf("roll number : %d \n",s3.rollNum);
    printf("cgpa : %f \n",s3.CGPA);



    //initializing structure in single line
    struct student s4 = {"Vivek",45,9.9};
    printf("student name : %s \n",s4.name);
    printf("roll number : %d \n",s4.rollNum);
    printf("cgpa : %f \n",s4.CGPA);



    //structure to pointer
    struct student *ptr = &s1;
    printf("student rollnum = %u\n",(*ptr));  //will print address of s1
    printf("student rollnum = %d\n",(*ptr).rollNum);   //to print only roll number of s1
    printf("student1 name is : %s\n",ptr->name);
    printf("student1 roll number is : %d \n",ptr->rollNum);
    printf("student1 cgpa is : %f",ptr ->CGPA);
    return 0;
}