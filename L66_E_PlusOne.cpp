// Prob no.: 
// easy question based on array


#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> digits = {4,3,2,1};
    vector<int> ans{4};
    int len = digits.size();    //4
    int power = len-1;  //3
    int num = pow(10,power);     //1000
    int final =  0;
    for(int i = 0; i<len; i++){
        int currNum = digits[i]*num;
        final += currNum;
        num /= 10;
    }
    cout<<final<<endl;
    int afterAddOne = final+1;
    cout<<afterAddOne<<endl;

    for(int j = len; j>0; j--){ 
        while(afterAddOne>0){
        int currDigit = afterAddOne%10;
        afterAddOne /= 10;
        // ans.insert(currDigit,j);
        }

    }
    
    return 0;
}