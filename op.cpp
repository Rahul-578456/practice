#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] && int(i * i) <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cnt++;
        }
    }
    cout << cnt;
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
