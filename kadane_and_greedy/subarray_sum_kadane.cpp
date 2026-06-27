#include <iostream>
#include <vector>
#include <algorithm>
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
    int current = 0;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        current = max(nums[i], current + nums[i]);
        largest = max(largest, current);
    }
    cout << largest;
    return 0;
}