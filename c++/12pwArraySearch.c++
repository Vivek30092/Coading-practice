//search if given number is present in the array ,if not then return -1 ,else return index of element.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    int array[]={14,66,35,66,78,34,30,5,6,9};
    int size=sizeof(array)/sizeof(array[0]);

    int ans=-1;
    for(int i=0;i<size;i++){
        if(array[i]==num){
            ans=i;
        }
    }
    cout<<"found at index "<<ans<<endl;       //if key found then the value of "ans will change otherwise it will return -1."
    cout<<"index -1 means element not found in Array.";
    return 0;
}