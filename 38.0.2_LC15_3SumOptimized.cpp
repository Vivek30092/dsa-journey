// LC15 : Three Sum Problem 
// using two pointer approach(sort array, then fix i and set j and k as extream pointers pointing to ends of array and move them accordingly)
// TC: O(nlogn + n^2)
// SC: O(uniqueTriplets)

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());      //O(nlogn)

    for(int i = 0; i<n; i++){
        // first optimization(skip repeatation of i value)
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1, k = n-1;

        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++; k--;

                // second optimization
                while(j<k && nums[j] == nums[j-1]) j++;
            }
            
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {-1,0,1,2,-1,4};

    vector<vector<int>> ans = threeSum(nums);

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    } 

    return 0; 
}