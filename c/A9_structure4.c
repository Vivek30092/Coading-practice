#include<stdio.h>
#include<string.h>

typedef struct peopleInformation
{
    char name[30];
    char gender[10];
    int age;
}pi;                         //Alias for struct name(pi2)

int main(){
    pi p1;
    strcpy(p1.name,"vivek");
    strcpy(p1.gender,"M");
    p1.age = 20;

    printf("name = %s\n",p1.name);
    printf("gender = %s\n",p1.gender);
    printf("age = %d",p1.age);
    return 0;
}