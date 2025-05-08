#include<iostream>
using namespace std;
int main(){
    int size=5;
    int number[size];

    for (int i=0;i<size;i++){
        cout<<"enter element "<<(i+1)<<" : ";
        cin>>number[i];
    }

    cout<<"elements of an array are: ";
    for(int i=0;i<size;i++){
        cout<<number[i]<<" , ";
    }
    cout<<endl;

    cout<<"reverse of an array is : ";
    for(int i=(size-1);i>=0;i--){
        cout<<number[i]<<" , ";
    }

    return 0;
}