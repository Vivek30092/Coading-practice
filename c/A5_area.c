#include <stdio.h>
#include <stdlib.h>

int square(int a);
int circle(int r);
int rectangle(int l,int w);


int main(){
    int n,a,r,l,w;
    printf("program to calculate area of : \n 1> square \n 2> circle  \n 3>rectangle  \n enter your choice : ");
    scanf("%d",&n);
    if(n==1){
        printf("enter side of square : ");
        scanf("%d",&a);
        printf("area of square is : %d ",square(a));

        
    }else if(n==2){
        printf("enter radius of circle : ");
        scanf("%d",&r);
        printf("area of circle is : %d ",circle(r));
    }else if(n==3){
        printf("enter length : ");
        scanf("%d",&l);
        printf("enter width : ");
        scanf("%d",&w);
        printf("area of rectangle is : %d ",rectangle(l,w));

    }else{
        printf("wrong data entered!! try again. ");
    }

    
    return 0;
}


int square(int a){
        return a*a;
}


int circle(int r){
    return 3.14*r*r;
}

int rectangle(int l,int w){
    return l*w;
}