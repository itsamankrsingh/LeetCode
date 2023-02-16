#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

using namespace std;

int main()
{
    inputOutput();
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int s;
    cin >> s;
    int first = -1;
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = v[i] + v[j];
            if (s == temp)
            {
                first = v[i];
                second = v[j];
                break;
            }
        }
    }
    cout << first << " " << second;
}