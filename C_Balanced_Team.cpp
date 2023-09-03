#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end(), greater<int>());
    // for (auto &it : v)
    // {
    //     cout << it;
    // }

    int ans = 0;

    int k = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        int l = i;
        k = 0;

        while (j < n && k < n && v[i] - v[j] <= 5)
        {

            j++;
            ans = max(ans, j - l);
        }
    }
    cout << ans << endl;
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
