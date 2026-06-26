#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    // time complexity :- O(n)
    // space complexity :- O(n)
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans(n,0);
    ans[0] = arr[0];
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}