// optimal approach : 2 pointer approach
// return max amount of water container can store
// problem 11 on leetCode
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxWater = 0;  //initial ans
    int lp=0,rp=height.size()-1;

    while(lp<rp){
        int w = rp-lp;
        int ht = min(height[lp],height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater,currWater);

        height[lp]<height[rp] ? lp++ : rp--;
    }

    cout<<"maximum water can be saved is "<<maxWater<<" unit.";
    return 0;
}

