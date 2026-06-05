// Sort array with 0s, 1s & 2s
// most optimized approach with new concept
// TC : O(n) solution will be found in single pass
// Using Dutch National Flag algorithm
/*          
            Logic used: 
Three pointer : low, mid, high
1.low: 0 to l-1
2.mid: l to m-1
complete unsorted part reside in mid to high between mid and high
[move mid:forward | high: backwork, until mid==high(unsorted part becomes zero(0).)]
3.high: h+1 to n-1  (n total element)

in starting mid, low = 0 and high = n-1
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sortColor(vector<int> &nums,int size){
    int low = 0, mid = 0, high = size-1;
    while (mid<=high)
    {
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++; low++;
        }else if (nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
    

}

void printValues(vector<int> &nums, int size){
    for(int val:nums){
        cout<<val<<" ";
    }
}
int main(){
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    int size = nums.size();
    sortColor(nums,size);
    printValues(nums,size);
    return 0;
}