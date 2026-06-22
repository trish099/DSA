#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> ans;
    // time complexity :- O(n^3 + nlogn) ->  O(n^3)
    // space complexity :- O(k)
    // auxiliary space :- O(1)
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-3;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && nums[j] == nums[j-1]){
                continue;
            }
            int p1 = j+1;
            int p2 = n-1;
            while(p1<p2){
                long long int t = (long long) nums[i] + nums[j] + nums[p1] + nums[p2];
                if(t>target){
                    p2--;
                }
                else if(t<target){
                    p1++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[p1],nums[p2]});
                    p1++;
                    p2--;
                    while(p1<p2 && nums[p1]==nums[p1-1]){
                        p1++;
                    }
                    while(p1<p2 && nums[p2] == nums[p2+1]){
                        p2--;
                    }
                }
            }

        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}