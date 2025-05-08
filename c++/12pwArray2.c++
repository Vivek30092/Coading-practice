//to find the maximum value out of all the elements in the array
#include<iostream>
using namespace std;
int main(){
    int array[]={8,35,64,63,73,11,89,30};
    int size=sizeof(array)/sizeof(array[0]);

    int max=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;


    return 0;
}