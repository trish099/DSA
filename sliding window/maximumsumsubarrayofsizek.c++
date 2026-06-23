// maximum sum subarray of size k
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(1)
    int current = 0,largest = 0;
    if(k>nums.size()){
        cout<<"invalid subarray";
        return 0;
    }
    for(int i=0;i<k;i++){
        current += nums[i];
    }
    for(int i=k;i<n;i++){
        current += nums[i];
        current -= nums[i-k];
        largest = max(largest,current);
    }
    cout<<largest;

    return 0;
}