//sum of series
// Sum = 1-2+3-4....n


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"inter num : ";
    cin>>num;
    int sum  = 0;
    for(int i = 1;i<=num;i++){
        if (i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
        }
    cout<<sum;
    return  0;
}