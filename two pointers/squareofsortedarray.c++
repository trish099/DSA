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
    // time complexity :- O(n)
    // space complexity :- O(1)
    vector<int> ans(n,0);
    int p1 = 0;
    int p2 = nums.size()-1;
    int i = ans.size()-1;
    while(p1<=p2){
        int x = nums[p1]*nums[p1];
        int y = nums[p2]*nums[p2];
        if(x>y){
            nums[i] = x;
            p1++;
        }
        else{
            nums[i] = y;
            p2--;
        }
        i--;
    }
    for(int j=0;j<n;j++){
        cout<<ans[j]<<" ";
    }
    return 0;
}