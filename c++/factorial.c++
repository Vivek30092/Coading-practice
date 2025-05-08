#include<iostream>
using namespace std;
int factorial(int num){
    if (num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    int num;
    cout<<"enter any positive integer: ";
    cin>>num;
    if (num<0){
        cout<<"It's negative number. Please enter valid number.";
    }
    else{
        int result=factorial(num);
        cout<<"factorial of "<<num <<" is: "<<result;
    }

    return 0;
}