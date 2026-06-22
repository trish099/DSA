#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // since array will be sorted 
    sort(nums.begin(),nums.end(),cmp);
    int p1 = 0;
    int p2 = nums.size()-1;
    while(p1<p2){
        int t =nums[p1] + nums[p2];
        if(t==target){
            cout<<nums[p1]<<" "<<nums[p2];
            return 0;
        }
        else if(t>target){
            p2--;
        }
        else{
            p1++;
        }
    }
    cout<<-1<<" "<<-1;
    return 0;
}