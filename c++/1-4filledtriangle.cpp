#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=(m-i);j++){
            cout<<" ";
        }for(j=1;j<=i;j++){
            cout<<i;
            }
            for(j=2;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
    }
return 0;
}
