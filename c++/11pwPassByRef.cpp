#include<iostream>
using namespace std;
int main(){
    int p=5;
    int &q=p;  ///byu using & operator q will also point the address as P

    q++;
    cout<<p<<endl;  //value of p will also change because p and q is refering to same momeory location

    cout<<&p<<endl;       //[&] ampersent operator is used to extract memory location/address of the variable
    cout<<&q<<endl;

    return 0;
}