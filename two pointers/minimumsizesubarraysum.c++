#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // Time complexity O(n)
    // space complexity O(1)
    int current = 0,length = INT_MAX,j=0;
    for(int i=0;i<n;i++){
        current += nums[i];
        while(current>=target){
            length = min(length,i-j+1);
            current -= nums[j];
            j++;
        }
    }
    if(length == INT_MAX){
        cout<<0;
        return 0;
    }
    cout<<length;

    return 0;
}