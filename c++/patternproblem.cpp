#include<iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"rows(m)";
    cin>>m;
    cout<<"column(n)";
    cin>>n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
           if(i==1 || j==1 || i==m ||j==n){
            cout<<"*";
           }
           else{
           cout<<" ";}
        }
        cout<<endl;    
    }
    return 0;
}
