//calculate the sum of all the elements in the array
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,14,30,9,5};
    int number_of_element=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for (int i=0;i<number_of_element;i++){
        int num=arr[i];
        sum+=num;
    }
    cout<<sum<<endl;

    return 0;
}