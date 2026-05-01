/*
N : no. of boards
M : no. of painters 
arr : length of boards along with unite time required to paint them in continuous manner
*/
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){        //TC : O(n)
    int painters = 1, time = 0;
    for(int i = 0; i<n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painters ++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT8_MIN;
    for(int i = 0; i<n; i++){       // Tc : O(n)
        sum += arr[i];
        maxVal = max(maxVal,arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while(st <= end){             // tc : O(log(sum)*n)
        int mid = st + (end-st)/2;

        if(isPossible(arr,n,m,mid)){//left
            ans = mid;
            end = mid-1;    
        }else{                        // right
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4;          // no. of boards
    int m = 2;          // no. of painters
    cout<< minTimeToPaint(arr, n, m)<<endl;
    return 0;
}