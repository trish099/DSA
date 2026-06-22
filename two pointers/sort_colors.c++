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
    int p1 = 0,mid = 0,p2 = n-1;
    while(mid<=p2){
        if(nums[mid] == 0){
            swap(nums[mid],nums[p1]);
            mid++;
            p1++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[p2]);
            p2--;
        }
    } // why we didnt used else if ladder or if? check case 0 1 2 for it
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}