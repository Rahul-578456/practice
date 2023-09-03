#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int d, p;
    cin >> n >> d >> p;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n, greater<int>());
    int sum = 0;
    for (int i = 0; i < d; i++)
    {
        sum += ar[i];
    }
    if (sum > p)
    {
    }
}

int main()
{
    int tt;
    tt = 1;
    while (tt--)
    {
        solve();
    }

    return 0;
}
