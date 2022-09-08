#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<int> runningSum(vector<int> &nums)
{
    vector<int>::iterator it;
    vector<int> res;
    // for (it = nums.begin(); it != nums.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    int sum = 0;
    for (it = nums.begin(); it != nums.end(); it++)
    {
        if (it == nums.begin())
        {
            res.push_back(*it);
            sum += *it;
        }
        else
        {
            sum += *it;
            res.push_back(sum);
        }
    }
    return res;
}
int main()
{
    inputOutput();
    int n;
    cin >> n;
    cout << n << endl;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int>::iterator it;

    vector<int> ans;
    ans = runningSum(v);
    cout << endl;
    for (it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }
}