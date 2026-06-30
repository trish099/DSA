#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(n)
    // vector<int> prefix(n,1);
    // for (int i = 1;i<n;i++){
    //     prefix[i] = prefix[i-1]*nums[i-1];
    // }
    // vector<int> suffix(n, 1);
    // for (int i=n-2;i>=0;i--){
    //     suffix[i] = suffix[i+1]*nums[i+1];
    // }
    // for (int i = 0;i<n;i++){
    //     prefix[i] *= suffix[i];
    // }
    // for (int i = 0;i<n;i++){
    //     cout<<prefix[i]<<" ";
    // }
    // since it can be slightly more optimized as we used 2 arrays in it
    // method 2
    vector<int> ans(n, 1);
    int prefix =1, suffix = 1;
    for (int i=0;i<n;i++){
        ans[i] = prefix;
        prefix *= nums[i];
    }
    for (int i=n-1;i>= 0;i--){
        ans[i] *= suffix;
        suffix *= nums[i];
    }
    for (int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}
