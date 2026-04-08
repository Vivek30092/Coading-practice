// tc : O(logN)
// works only on sorted array(monotonous,monotonic function : always inc. or dec. function)
// 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-1,0,3,4,5,9,12};
    int target = 12;

    // 1. find mid
    // 1.1 if tar>all[mid] : 2nd half
    // 1.1.1 str = mid+1
    // 1.2 if tar<all[mid] : 1st half
    // 1.2.1 end = mid-1
    // 1.3 if tar == mid : ans

    // 1st half = (str to mid-1)
    // 2nd half = (mid+1 to end)
    return 0;
}