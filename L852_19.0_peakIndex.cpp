// Prob. 852. : Peak Index in Mountain array problem
// Prob. 852 on leetCode
#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &nums){
    int st = 1,end = nums.size()-2;     //not including first and last elements of array, removing unnecessary checks
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){             //st and end will not affect it now
            return mid;
        }
        if(nums[mid-1] < nums[mid]){    //right search
            st = mid + 1;
        }else{                          //left search
            end = mid - 1;
        }
        return -1;
        } 
}
int main(){
    vector<int> nums = {0,10,5,2};
    cout<<peakIndexInMountainArray(nums);
    return 0;   
}