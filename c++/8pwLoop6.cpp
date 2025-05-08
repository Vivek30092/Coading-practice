//given 2 num A and B. Find A raise to the power B
#include<iostream>
using namespace std;
int main(){
    int numA,numB;
    cout<<"enter numA: ";
    cin>>numA;
    cout<<"enter numB: ";
    cin>>numB;
    int result = 1;
    for(int i=1;i<=numB;i++){
         result = result*numA; 
    }
    cout<<result;
    return 0;
}