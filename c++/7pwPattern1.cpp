/* **********
   **********
   ********** */
#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"number of rows required : ";
    cin>>rows;
    cout<<"number of columns required : ";
    cin>>columns;    
    for (int i=1; i<=rows;i++){
        for (int j=1;j<=columns;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}