#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int crime = 0;
    int polise = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            if (polise < 1)
            {
                crime++;
            }
            else
            {
                polise--;
            }
        }
        else
        {
            polise += a;
        }
        }
    cout << crime;
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
