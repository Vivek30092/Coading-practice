// prob 540 on LeetCode : Single element in a sorted array
#include<iostream>
#include<vector>
using namespace std; 
int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size()-1;
        if(nums.size()==1) return nums[0];
        while(st<=end){
            int mid = st + (end-st)/2;
            if(mid == 0 && nums[0]!=nums[1]) return nums[mid];
            if(mid == nums.size()-1 && nums[nums.size()-1] != nums[nums.size()-2]) return nums[mid];

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return mid;
            }
            if(mid%2==0){       //even number at both side of mid
                if(nums[mid-1] == nums[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{              // odd number at both side of mid
                if(nums[mid-1] == nums[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        return mid;
        }
        // return -1;
    }
int main(){
    vector<int> arr = {};
    cout<<singleNonDuplicate(arr);
    return 0;
}