#include <iostream>
#include <vector>
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
    // time complexity :- O(n)
    // space complexity :- O(1)
    int jump = 0, maxreach = 0, currentend = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxreach = max(maxreach, i + nums[i]);
        if (i == currentend)
        {
            jump++;
            currentend = maxreach;
        }
    }
    cout << jump;
    return 0;
}