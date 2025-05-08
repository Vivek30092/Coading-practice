#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum= num1+num2+num3;
    return sum;
}

float add(float num1,float num2){
    float sum= num1+num2;
    return sum;
}
int main(){
    float num1,num2;
    cout<<"enter num1 : ";
    cin>>num1;
    cout<<"enter num2 : ";
    cin>>num2;
    
    cout<<add(num1,num2);
    
    return 0;
}