//reverse the digit of number
#include<iostream>
using namespace std;
int main(){
    int num;
    int reverse=0;
    cout<<"enter number: ";
    cin>>num;
    while(num>0){
        int lastdigit= num%10;
        reverse = reverse*10 + lastdigit;
        num = num/10;
        }
    cout<<reverse;
    return 0;
}