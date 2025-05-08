#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("age : ");
    scanf("%d",&age);
    age >=18 ? printf("adult \n"): printf("child");
    return 0;
}
