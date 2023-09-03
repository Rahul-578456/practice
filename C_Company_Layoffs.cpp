#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long int n, q;
    cin >> n >> q;
    vector<long long int> v(n);
    for (auto &it : v)
        cin >> it;

    long long int i = 0;
    sort(v.begin(), v.end());
    while (q--)
    {
        long long int x;
        cin >> x;
        int l = upper_bound(v.begin(), v.end(), x) - v.begin();
        // cout << l;
        // cout << endl;
        long long int sum = 0;
        for (int i = 0; i < l; i++)
        {
            sum += v[i];
        }
        for (int i = l; i < n; i++)
        {
            sum += x;
        }
        cout << sum << endl;
    }
}

int main()
{
    int tt;
    // cin >> tt;
    tt = 1;
    while (tt--)
    {
        solve();
    }

    return 0;
}
