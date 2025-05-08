#include<iostream>
using namespace std;
int main(){
    int num1 = 30;
    int num2 = 2;

    cout<<num1+num2<<endl; //32
    cout<<num1-num2<<endl; //28
    cout<<num1*num2<<endl; //60
    cout<<num1%num2<<endl; //0
    cout<<num1/num2<<endl; //15


    cout<<(num1==num2)<<endl; //0
    cout<<(num1!= num2)<<endl; //1
    cout<<(num1>=num2)<<endl;//1
    cout<<(num1<=num2)<<endl;//0
    cout<<(num1<num2)<<endl;//0
    
    
    num2+=2;
    cout<<num2<<endl; //4
    num2-=2;
    cout<<num2<<endl; //2
    num2*=2;
    cout<<num2<<endl; //4
    num2%=2;
    cout<<num2<<endl; //0


    return 0;
}