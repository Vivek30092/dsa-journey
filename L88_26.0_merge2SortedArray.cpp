// problem 88. of leetCode
// merge two sorted array into single array
#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int> &nums1, vector<int> &nums2, int m, int n){
    int idx = m+n-1, i = m-1, j = n-1;
    while(i >= 0 && j >=0){
        if(nums1[i] >= nums2[j]){
            nums1[idx] = nums1[i];
            idx--;i--;
        }else{
            nums1[idx--] = nums2[j--];
        }
    }
    while (j>=0){
        nums1[idx--] = nums2[j--];              //idx--; and j--  in same line(assignment and decrement)
    }
    
}

void printArray(vector<int> &nums1, int m){
    for(int val : nums1){
        cout<<val<<" ";
    }
}
int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;                              // no. of valid element in nums1
    vector<int> nums2 = {2,5,6};
    int n = 3;                              // no. of valid element in nums2
    mergeSortedArray(nums1,nums2,m,n);
    printArray(nums1,m);
}