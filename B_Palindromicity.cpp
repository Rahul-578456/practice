#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    } 
    int l = k / 2;
    string s;
    for (int i = 0; i < l; i++)
    {
        s += "0";
    }
    for (int i = l; i < n; i++)
    {
        s += "1";
    }
    cout << "YES" << endl;
    cout << s << endl;
    return;
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