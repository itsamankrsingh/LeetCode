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
    unordered_map<int, int> map;
    unordered_set<int> set;
    vector<int> v;
    vector<int> res;
    vector<int>::iterator it;
    for (int i = 0; i < nums.size(); i++)
    {
        map.insert(nums[i], i);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (set.find(rem) != set.end())
        {
            v.push_back(rem);
            v.push_back(nums[i]);
            break;
        }
        set.insert(nums[i]);
    }
    auto a = map.find(v[0]);
    int num1 = a->second;
    a = map.find(v[1]);
    int num2 = a->second;
    res.push_back(num1);
    res.push_back(num2);
    // sort(nums.begin(), nums.end());
    /* int n = nums.size();
     vector<int> res;
     for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; j < n; j++)
         {
             int temp = nums[i] + nums[j];
             if (temp == target)
             {
                 res.push_back(i);
                 res.push_back(j);
                 break;
             }
         }
     }*/
    return res;
}
int main()
{
    inputOutput();
    vector<int> nums = {3, 2, 4};
    vector<int> res = twoSum(nums, 6);
    vector<int>::iterator it;
    for (it = res.begin(); it != res.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}