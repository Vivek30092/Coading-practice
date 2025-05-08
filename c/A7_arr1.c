//WAP to enter price of  3 items & print their final cost with gst
#include<stdio.h>
int main(){
    float arr[3];
    printf("enter item prize for... \n");
    printf("1 : ");
    scanf("%f",&arr[0]);
    printf("2 : ");
    scanf("%f",&arr[1]);
    printf("3 : ");
    scanf("%f",&arr[2]);
    float cost = (arr[0]+arr[1]+arr[2]);
    printf("total prize is: %f \n",cost);
    float gst = cost*0.18;
    printf("final prize with GST: %f",gst+cost);

    return 0;
}