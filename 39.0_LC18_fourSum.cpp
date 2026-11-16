// LC18: four sum problem
/* find grp of 4 no. among given arr so it's overall sum is equal to given target and each values should be of unique index
*/
// using two pointer approach(sorted array is imp)
// TC: O(nlogn + n^3)
// SC: O(unique groups we are storing in ans)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int tar){
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());     //O(nlogn)

    for(int i = 0; i<n; i++){
        // optimization one
        if(i>0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j<n;){

            int p = j+1, q = n-1;

            while(p<q){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if(sum<tar){
                    p++;
                }else if(sum>tar){
                    q--;
                }else{
                    // sum == target
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++; q--;
                    // third optimization
                    while(p<q && nums[p] == nums[p-1]) p++;
                }
            }
            // second optimization
            j++;
            while(j<n &&  nums[j] == nums[j-1]) j++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-2,-1,-1,1,1,2,2};
    int target = 0  ;

    vector<vector<int>> ans = fourSum(nums, target);

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    } 

    return 0;
}