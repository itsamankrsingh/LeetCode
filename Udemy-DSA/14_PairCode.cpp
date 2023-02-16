#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int sum)
{
    unordered_set<int> set;
    vector<int> result;

    // logic
    for (int i = 0; i < arr.size(); i++)
    {

        int x = sum - arr[i];

        if (set.find(x) != set.end())
        {
            result.push_back(arr[i]);
            result.push_back(x);
            return result;
        }

        // insert the current number to set
        set.insert(arr[i]);
    }
    // no pair found
    return {};
}

int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int s = 4;
    auto p = pairSum(arr, s);
    if (p.size() == 0)
    {
        cout << "No Such Pairs";
    }
    else
    {
        cout << p[0] << " " << p[1];
    }
}