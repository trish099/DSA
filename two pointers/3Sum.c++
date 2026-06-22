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
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    // time complexity :- O(n^2 + nlogn) -> O(n^2)
    // space complexity :- O(k)
    // auxiliary space :- O(1)
    for(int i=0;i<n-2;i++){
        if(nums[i]>0){
            break;
        }
        else if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int p1 = i+1;
        int p2 = n-1;
        while(p1<p2){
            int sum = nums[i] + nums[p1] + nums[p2];
            if(sum>0){
                p2--;
            }
            else if(sum<0){
                p1++;
            }
            else{
                ans.push_back({nums[i],nums[p1],nums[p2]});
                p1++;
                p2--;
                while(p1<p2 && nums[p1]==nums[p1-1]){
                    p1++;
                }
                while(p1<p2 && nums[p2]==nums[p2+1]){
                    p2--;
                }
            }
        }

    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}