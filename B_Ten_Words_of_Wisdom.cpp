#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i = 1;
    int w;
    int k = 0;
    while (i <= n)
    {
        int a, b;
        cin >> a >> b;

        if (a <= 10)
        {
            if (b >= k)
            {
                w = i;
                k = b;
            }
        }
        i++;
    }
    cout << w << endl;
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
