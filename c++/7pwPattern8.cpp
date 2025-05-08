#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any integer : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1 || i == num || j == 1 || j == num){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
     return 0;
}


/*

123456
1    6
1    6
1    6
1    6
123456

*/