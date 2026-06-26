#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int leftsum = 0;
    int sum = 0;
    for(int i:nums){
        sum += i;
    }
    for(int i=0;i<n;i++){
        if(leftsum == sum-leftsum-nums[i]){
            cout<<i;
            return 0;
        }
        leftsum += nums[i];
    }
    cout<<-1;
    return 0;

}