#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
double average(vector<int> &salary)
{
    double average = 0;
    sort(salary.begin(), salary.end());
    int size = salary.size();
    for (int i = 1; i < size - 1; i++)
    {
        average += salary[i];
    }
    return average / (size - 2);
}
int main()
{
    inputOutput();
    int n;
    cin >> n;
    vector<int> salary;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        salary.push_back(temp);
    }
    cout << average(salary);
    return 0;
}