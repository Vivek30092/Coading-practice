//count the number of digit in given number n
#include <iostream>
using namespace std;
int main(){
    int num;
    int digits=0;
    cout<<"inter any integer : ";
    cin>>num;
    while(num>0){
        digits++;
        num=num/10;
    }
    cout<<"input is "<<digits<<" number.";

    return 0;
}