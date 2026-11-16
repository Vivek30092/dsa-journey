// LC15: 3 sum problem
// return i,j,k whose sum is 0
// using hashing approach to solve problem
// TC : O(n^2 * log(uniqueTriplets)[log is due to set we're using])
// SC : O(unique triplets + n(size of set))
// required =  a + b + c = 0
// B + C = -A (USING MAPS/SETS)
/*
A = -nums[i] = target
B = nums[j] 
C = third = tar - nums[j] (c = a-b) 
*/

#include<iostream>
#include<set>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> & nums){
    int n = nums.size();

    set<vector<int>> uniqueTriplets;     //set of <uniqueTriplets>

    for(int i = 0; i<n; i++){
        int tar = -nums[i];
        set<int> s;

        for(int j = i+1; j<n; j++){     //O(n)
            int third = tar - nums[j];

            if(s.find(third) != s.end()){   //O(n)
                vector<int> trip = { nums[i], nums[j], nums[third]};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }

            s.insert(nums[j]);  
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
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