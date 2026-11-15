// LC287 : find Duplicate (optimized approach using constant extra space)
// slow - fast pointer approach(generally used in linkedList for cycle detection)
// tc = O(N) and SC = O(1)

/*      solution
imagine array as linked list whose index is node and element is next node
*/

/*      slow-fast pointer approach
take two pointer for linkedList(fast,slow) both starts from nums[0]
1.  slow inc with step +1
    fast inc with step +2
    inc both till both become equal
2.  slow = nums[0]
    slow +1
    fast +1
    till both become equal(slow == fast)
*/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr){
    int slow = arr[0], fast = arr[0];
    
    do{
        slow = arr[slow];   // +1
        fast = arr[arr[fast]];  //+2
    }while(slow != fast);

    slow = arr[0];

    while(slow != fast){
        slow = arr[slow];    //+1
        fast = arr[fast];    //+1
    }
    return slow;

}
int main(){
    vector<int> nums = {1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;
}