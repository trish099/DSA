#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return a + b > b + a;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<string> s;
    for (int i : nums)
    {
        s.push_back(to_string(i));
    }
    sort(s.begin(), s.end(), cmp);
    if (s[0] == "0")
    {
        cout << "0";
        return 0;
    }
    string result;
    for (string &i : s)
    {
        result += i;
    }
    cout << result;
    return 0;
}