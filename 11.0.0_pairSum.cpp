// given sorted array
// time complexity : O(n^2) 
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int n = vec.size();

    for(int i = 0; i<n ; i++){
        for(int j = i+1; j<n; j++){
            if(vec[i]+vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {2,7,11,15};
    vector<int> vecNew;
    int target = 9;
    vector<int> ans = pairSum(vec,target);
    cout<<ans[0]<<", " << ans[1]<<endl;
    return 0;    
};