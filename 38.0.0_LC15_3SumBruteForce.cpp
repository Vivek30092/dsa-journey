// LC15: 3 sum problem
// return i,j,k whose sum is 0
// TC : O(n^3 * log(uniqueTriplets))
// SC : O(unique triplets)
#include<iostream>
#include<set>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> ans;
    
    set<vector<int>> s; //set<uniqueTriplets>


    for(int i = 0; i<n; i++){       //O(N)  
        for(int j = i + 1; j< n; j++){
            for(int k = j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    // using set to store the unique triplet
                    // we're not using unordered_set bcq it's trickier to solve suing unordered_set(we'll need to write custom hash in US)
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip) == s.end()){        //O(log(unique triplet)) : for the case of set, in unordered it takes constant time
                        s.insert(trip);
                        ans.push_back(trip);
                    }

                }
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
            cout<<ans[i][j]<< " ";
        }
        cout<<endl;
    }    
    return 0;
}