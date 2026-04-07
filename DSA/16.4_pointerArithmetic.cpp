
#include<iostream>
using namespace std;
int main(){
    // Increment(++)/Decrement(--) : size incr. or decr. by size of pointer based on datatype
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    ptr++;      //size of int is 4
    cout<<ptr<<endl;

    // add/subtract number
    cout<<ptr+1<<endl;      //add 4bite of storage space
    cout<<ptr-1<<endl;      //1int = 4B
    return 0;
}