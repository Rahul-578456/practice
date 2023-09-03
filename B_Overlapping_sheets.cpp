#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ar[100 + 1][100 + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int k = a; k < b; k++)
        {
            for (int j = c; j < d; j++)
            {
                ar[k][j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (ar[i][j] == 1)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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
