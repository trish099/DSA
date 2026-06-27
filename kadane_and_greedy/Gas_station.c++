#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> gas(n), cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    // time complexity :- O(n)
    // space complexity :- O(1)
    int totalgas = 0, currentgas = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        totalgas += gas[i] - cost[i];
        currentgas += gas[i] - cost[i];
        if (currentgas < 0)
        {
            start = i + 1;
            currentgas = 0;
        }
    }
    if (totalgas >= 0)
    {
        cout << start;
        return 0;
    }
    cout << -1;
    return 0;
}
// gas[i] :- amount of gas we have
// cost[i] :- amount of gas needed to reach from i to i+1 station
// if gas[i] - cost[i] is negative means we cant reach from ith station to i+1th station
// therefore we will update the start to i+1 and check whether we can reach i+2 station from i+1 station or not
// if yes then it is the answer