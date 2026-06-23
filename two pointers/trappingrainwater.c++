#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(1)
    int p1 = 0;
    int p2 = nums.size()-1;
    int leftmax = 0,rightmax = 0,ans=0;
    while(p1<p2){
        if(nums[p1]<nums[p2]){
        leftmax = max(leftmax,nums[p1]);
        ans += leftmax - nums[p1];
        p1++;
        }
        else{
            rightmax = max(rightmax,nums[p2]);
            ans += rightmax-nums[p2];
            p2--;
        }
    }
    cout<<ans;
    return 0;
}