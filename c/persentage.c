#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,d,e,f,g;
    printf("enter number of subject 1 : ");
    scanf("%f",&a );
    printf("enter number of subject 2 : ");
    scanf("%f",&b );
    printf("enter number of subject 3 : ");
    scanf("%f",&c );
    printf("enter number of subject 4 : ");
    scanf("%f",&d );
    printf("enter number of subject 5 : ");
    scanf("%f",&e );
    g=(a+b+c+d+e)/5;
    
    if(g>45){
        if(g>80) printf("grade 'A' ");
        else if (g>60) printf("grade 'B' ");
        else printf("grade 'C'");
        }
    else printf("you failed !!");
    return 0;
}