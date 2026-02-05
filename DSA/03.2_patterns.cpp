// triangle pattern
/*
*/
#include<iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 0; i<num; i++){
        for(int j = 0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}