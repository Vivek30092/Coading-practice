#include<iostream>
using namespace std;
int main(){
    
    int num1,num2;
    cout<<"enter two number of same digit."<<endl;
    cout<<"enter num1 : ";
    cin>>num1;
    cout<<"enter num2 : ";
    cin>>num2;
    
    
    int rows,column;
    cout<<"enter number of rows required : ";
    cin>>rows;
    cout<<"enter number of column required : ";
    cin>>column;
    for(int i= 1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            if((i+j)%2==0){
                cout<<num1;
            }else{
                cout<<num2;
            }
        }
        cout<<endl;
    }
    return 0;
}


/*

121212
212121
121212
212121

*/