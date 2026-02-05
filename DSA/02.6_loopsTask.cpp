// check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    // check weather given number is prime or not
    int num;
    cout<<"enter number to check isPrime : ";
    cin>>num;
    for(int i = 2;i<=(num-1);i++){
        if(num%i!=0){
            cout<<"prime number";
            break;
        }else{
            cout<<"not prime";
        }
    }
    // prime number between given number
}