#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // greedy approach says accumulate profit whenever we get it
    // time complexity :- O(n)
    // space complexity :- O(1)
    int ans = 0;
    for(int i=0;i<n;i++){
        if(nums[i]>nums[i-1]){
            ans += nums[i] - nums[i-1];
        }
    }
    cout<<ans;
    return 0;
}