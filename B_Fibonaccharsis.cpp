#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = n; i >= 0; i--)
    {
        int fast = i;
        int sec = n;
        bool ok = true;
        for (int j = 0; j < k - 2; j++)
        {
            int fx = fast;
            fast = sec - fx;
            sec = fx;
            if (sec >= fast && fast >= 0)
            {
                ok = true;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans++;
        }
    }
    cout << ans << endl;
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
