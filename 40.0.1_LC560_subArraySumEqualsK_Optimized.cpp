// LC560 : subarray sum equals to target(k)
// using optimized approach named PREFIX SUM
/*      PREFIX SUM
calculate and store sum of prefix value from start to index i value
prefix_sum[i] = store some from 0 to ith index

**imp   subArraySum(i,j) = PS[j] - PS[i-1]
ps[i-1] = ps[j] - target

TC: O(n)
SC: O(n)
*/
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int> &arr, int target){
    int n = arr.size();
    int count = 0;
    vector<int> prefixSum(n,0);

    prefixSum[0] = arr[0];
    
    // calculate prefixsum
    for(int i = 1; i<n; i++){       //O(n)
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    unordered_map<int,int> m;       // PS with freq
    for(int j = 0; j<n; j++){       //O(n)
        if(prefixSum[j] == target) count++;

        int val = prefixSum[j] - target;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        if(m.find(prefixSum[j]) != m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;    
}

int main(){
    vector<int> arr = {9,4,0,20,3,10,5};
    int target = 33;
    cout<<subarraySum(arr,target);
    return 0;
}