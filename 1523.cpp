#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int countOdds(int low, int high)
{
    int count = 0;
    if (low % 2 == 0 && high % 2 == 0)
    {
        count = (high - low) / 2;
    }
    else if ((low % 2 == 1 && high % 2 == 0) || (low % 2 == 0 && high % 2 == 1))
    {
        count = ((high - low) / 2) + 1;
    }
    else if (low % 2 == 1 && high % 2 == 1)
    {
        count = ((high - low) / 2) + 1;
    }
    return count;
}
int main()
{
    inputOutput();
    int low, high;
    cin >> low;
    cin >> high;
    cout << countOdds(low, high);
    return 0;
}