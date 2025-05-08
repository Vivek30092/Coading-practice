#include<iostream>
using namespace std;
int add(int a = 0,int b =0 ,int c = 0){
    return (a+b+c);
}
int main(){
    cout<<add(5,6)<<endl;
    cout<<add(4)<<endl;
    cout<<add(14,30,5);
    return 0; 
}