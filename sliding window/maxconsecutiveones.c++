// maximum consecutive ones part 3
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
    int placed = 0,j=0,longest = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            placed++;
        }
        while(placed>k){
            if(nums[j]==0){
                placed--;
            }
            j++;
        }
        longest = max(longest,i-j+1);
    }
    cout<<longest;
    return 0;
}
