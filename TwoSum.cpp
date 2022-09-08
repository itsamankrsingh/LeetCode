#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int>::iterator it;
    cout << "target -> " << target << endl;
    cout << "fun: -> ";
    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }

    vector<int> res;
    cout << endl;
    res.push_back(nums[1]);
    res.push_back(nums[2]);

    return res;
}

int main()
{
    inputOutput();
    vector<int> nums;
    int n;
    int target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    cin >> target;
    vector<int> res = twoSum(nums, target);
    vector<int>::iterator it;

    cout << "fun call: -> ";
    for (it = res.begin(); it != res.end(); it++)
    {
        cout << *it << " ";
    }
}