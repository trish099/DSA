#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int left = 0, flag = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            flag = 1;
            cout << mid;
            return 0;
        }
        else if (nums[mid] <= nums[right])
        {
            if (target > nums[mid] && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        else
        {
            if (target < nums[mid] && target >= nums[left])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << -1;
    }
    return 0;
}