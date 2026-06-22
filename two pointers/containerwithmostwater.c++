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
    // Time complexity :- O(n)
    // space complexity :- O(1)
    int p1 = 0;
    int p2 = nums.size() -1;
    int largest = 0;
    while(p1<p2){
        int area = min(nums[p1],nums[p2])*(p2-p1);
        largest = max(largest,area);
        if(nums[p1]<nums[p2]){
            p1++;
        }
        else{
            p2--;
        }
    }
    cout<<largest;
    return 0;
}