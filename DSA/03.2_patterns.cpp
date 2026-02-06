// triangle pattern
/*
*/
#include<iostream>
using namespace std;
int main(){
    // for stars
    int num = 4;
    for(int i = 0; i<num; i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    // for numbers
    for(int i = 0; i<num; i++){
        for(int j = 0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    // for char
    char ch = 'A';
    for(int i=0;i<num;i++){
        for(int j = 0; j<i+1;j++){
            cout<<ch<<" ";
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}