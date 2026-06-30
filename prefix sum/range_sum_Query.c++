#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prefix(n, 0);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    if (l == 0)
    {
        cout << prefix[r];
    }
    else
    {
        cout << prefix[r] - prefix[l - 1];
    }
}