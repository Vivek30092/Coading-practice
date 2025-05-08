#include<iostream>
using namespace std;
int main(){
    //always initialize array while defining otherwise it will show pre present value which is called "garbage value"
    int arr[]={1,3,4,5,5,3,5};

    //cout<<"size of array is: ";
    //cout<<sizeof(arr)<<endl;

    //cout<<"number of elements in array: ";
    int size=sizeof(arr)/sizeof(arr[0]);
    

    //traversing through array
    //using for loop
    for(int i=0;i< size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    //using for each loop
    for(int i:arr){
        cout<<i<<endl;
    }
    cout<<endl;

    //traversing through loop using while loop 
    int index=0;
    while(index<size){
        cout<<arr[index]<<endl;
        index++;
    }




    return 0;
}

