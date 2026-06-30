#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
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
    int max_so_far = 1;
    int min_so_far = 1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        int temp_max = max({nums[i],nums[i]*max_so_far,nums[i]*min_so_far});
        int temp_min = min({nums[i],nums[i]*min_so_far,nums[i]*max_so_far});
        max_so_far = temp_max;
        min_so_far = temp_min;
        ans = max(ans,max_so_far);
    }
    cout<<ans;
    // the max subarray sum like solution only works if the answer is formed by multiplying only positive vakues
    // if the answer is formed by multiplying 2 negative values we have to keep track of  temp_min
    // question why we have to store  max_so_far later why cant we do it directly
    // ans :- try -4 -3 -2
    // in that case temp_max/max_so_far will effect min_so_far which will change the answer
    // error version :-                                        correct version :-
    // temp_max = -4                                           temp_max = -4
    // temp_min = -4                                           temp_min = -4
    // ans = -4                                                ans = -1

    // temp_max = 12                                           temp_max = 12
    // temp_min = -36 here is the issue 12*-3                  temp_min = -3
    

    // temp_max = 72                                           temp_max = 12
    // temp_min = -24                                          temp_min = -24
    
    return 0;
}