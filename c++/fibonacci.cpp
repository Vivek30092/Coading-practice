#include<iostream>
using namespace std;
int main(){
    int num1=0,num2=1,num;
    int next_num=0;
    cout<<"enter any integer: ";
    cin>>num;
    cout<<"series is: "<<num1<<", "<<num2<<", ";
    for(int i=0;i<(num-2);i++){
        next_num=num1+num2;
        cout<<next_num<<", ";
        num1=num2;
        num2=next_num;
    }

    return 0;
}