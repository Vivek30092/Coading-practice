#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any integer : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=i;j<=num;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


/*

1234567
2345671
3456712
4567123
5671234
6712345
7123456

*/