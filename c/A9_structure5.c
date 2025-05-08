//Practice Qs 56
//Enter dereccion (house no, block,city,state) of cinco personas
#include<stdio.h>
#include<string.h>

typedef struct address
{
    int houseNo;
    char block[1];
    char city[20];
    char state[20];
}add;

void printdata(struct add p);

int main(){
    struct address adds[5];
    struct add p1 = {455,"A","Indore","Madhya Pradesh"};
    struct add p2 = {77,"F","Indore","Madhya prades"};
    struct add p3 = {155,"B","Indore",Madhya pradesh};
    struct add p4 = {23,"G","Palam","delhi"};
    struct add p5 = {67,"M","Barhara","Bihar"};

    printf("name: %s",p1.name);
    return 0;
}

// void printdata(struct add p){
//     printf("name : %s",p)
// }

