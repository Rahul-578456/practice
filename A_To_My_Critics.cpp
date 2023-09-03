#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, l;
    cin >> n >> l >> m;
    if (l + m >= 10 || n + l >= 10 || n + m >= 10)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
