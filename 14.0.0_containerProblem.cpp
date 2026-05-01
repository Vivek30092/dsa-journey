// brute force approach
// return max amount of water container can store
// problem 11 on leetCode
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height){
    int mArea = 0,area;
    for(int i = 0; i<height.size(); i++){
        for(int j = i+1; j<height.size(); j++){
            int wd = j-i;
            int ht = min(height[i],height[j]);
            int currArea = wd*ht;
            mArea = max(mArea,currArea);
        }
    }
    return mArea;
}

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int Area = maxArea(arr);
    cout<<"maximum area of container: "<<Area; 
    return 0;
}