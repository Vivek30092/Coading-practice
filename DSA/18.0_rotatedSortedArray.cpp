// rotated sorted array
// leetCode problem 33
// ascending order, distinct values
#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int> arr, int tar){
    int st = 0,end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;  
        if(arr[st]<tar & tar<arr[mid]){
            end=mid-1;
        }else if(arr[end]>tar & tar>arr[mid]){
            st = mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int tar = 0;

    cout<<binSearch(arr,tar);

    return 0;
}
