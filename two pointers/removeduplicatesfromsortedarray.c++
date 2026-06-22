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
    sort(nums.begin(),nums.end());
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }
    for(int i=0;i<j+1;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
