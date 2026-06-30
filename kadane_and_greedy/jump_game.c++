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
    int maxreach = 0;
    for(int i=0;i<n;i++){
        if(i>maxreach){
            cout<<false;
            return 0;
        }
        maxreach = max(maxreach,i+nums[i]);
    }
    cout<<true;
    return 0;
}
// keep track of maximum index a element can reach if its smaller than previous one then previous one might be the answer
