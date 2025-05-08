#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any integer : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}



/*

12345
12345
12345
12345
12345

*/