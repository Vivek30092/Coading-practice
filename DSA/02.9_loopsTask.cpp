// print factorial of a number N.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number to find factorial : ";
    cin>> num;
    for(int i = 1;i<=(num/2);i++){
        if(num%i == 0){
            cout<< i <<" ";
        }
    }
    return 0;
}