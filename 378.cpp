#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s.push_back(matrix[i][j]);
        }
    }
    sort(s.begin(), s.end());

    return s[k - 1];
}

int main()
{
    inputOutput();
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmpVector;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            tmpVector.push_back(temp);
        }
        matrix.push_back(tmpVector);
    }
    int k;
    cin >> k;
    cout << kthSmallest(matrix, k);
}