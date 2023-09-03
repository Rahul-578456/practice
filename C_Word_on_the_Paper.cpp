#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char c[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> c[i][j];
        }
    }
    string s;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (c[i][j] >= 'a' && c[i][j] <= 'z')
            {
                s += (c[i][j]);
            }
        }
    }
    cout << s << endl;
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
