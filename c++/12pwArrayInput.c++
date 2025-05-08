#include<iostream>
using namespace std;
int main(){
    char arr[5];

//     //taking input using for loop
//     for(int idx=0;idx<5;idx++){
//         cout<<"enter array element "<<idx<<": ";
//         cin>>arr[idx];
//     }
// //printing the input value
//     for(int idx=0;idx<5;idx++){
//         //cout<<"enter array element "<<idx<<": ";
//         cout<<arr[idx]<<" ";
//     }

//taking input using for each loop
    for(char &vowel:arr){
        cin>>vowel;
        
    }

    
    return 0;
}