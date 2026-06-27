#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int prefix = INT_MAX;
    int ans = 0;
    // time complexity :- O(n)
    // space complexity :- O(1)
    for (int i = 0; i < n; i++)
    {
        prefix = min(prefix, nums[i]);
        ans = max(ans, nums[i] - prefix);
    }
    cout << ans;

    return 0;
}