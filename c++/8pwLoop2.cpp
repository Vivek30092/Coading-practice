//find the sum of digits in a given number.
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter num: ";
    cin>>num;
    while(num>0){
        int lastdigit=num%10;
        sum+=lastdigit;
        num=num/10;
    }

    cout<<sum;
    return 0;
}

