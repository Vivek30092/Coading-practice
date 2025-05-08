#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"enter required rows : ";
    cin>>rows;
    cout<<"enter required columns : ";
    cin>> columns;
    for(int i=1;i<=rows;i++){
        for(int j =1; j<=columns;j++){
            if(i==1 || j==columns || j ==1 || i==rows){
                cout<<'*';
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


/* 


******
*    *
*    *
******


*/