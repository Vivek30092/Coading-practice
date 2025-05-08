#include<iostream>
using namespace std;
int main(){
    int size=3;
    int number[size];

    for (int i=0;i<size;i++){
        cout<<"enter element "<<(i+1)<<" : ";
        cin>>number[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        
        sum=sum+number[i];
    }
    cout<<"sum of elements is: "<<sum<<endl;    cout<<"average of elements is: "<<sum/size;
    return 0;
}