#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < mn || ar[i] > mx)
        {
            cnt++;
            mx = max(mx, ar[i]);
            mn = min(mn, ar[i]);
            cout << ar[i] << endl;
        }
    }
    cout << cnt - 1 << endl;
    ;
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
