// using Kadane's Algorithm
// time complexity of O(n^2)
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int currSum = 0,maxSum = INT_MIN;

    for(int st = 0; st<size; st++){
        currSum+=arr[st];
        maxSum = max(currSum,maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"maximum sum : "<<maxSum; 
    return 0;
};