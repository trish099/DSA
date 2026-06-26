// number of subarray with product less than k
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,ans = 0,k;
    cin>>n>>k;
    vector<int> nums(n);
    // time complexity :- O(n)
    // space complexity :- O(1)
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int current = 1,l = 0;
    for(int i=0;i<n;i++){
        current *= nums[i];
        while(current >= k){
            current /= nums[l];
            l++;
        }
        ans += i-l+1;
    }    
    cout<<ans;
    return 0;
}