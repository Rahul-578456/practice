#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> c[i][j];
        }
    }
    if (c[0][1] == c[1][1] && c[1][1] == c[2][1] && c[0][1] != '.')
    {
        cout << c[0][1];
        return;
    }
    if (c[0][0] == c[0][1] && c[0][1] == c[0][2] && c[0][0] != '.')
    {
        cout << c[0][0];
        return;
    }
    if (c[0][0] == c[1][0] && c[1][0] == c[2][0] && c[0][0] != '.')
    {
        cout << c[0][0];
        return;
    }
    if (c[2][0] == c[2][1] && c[2][1] == c[2][2] && c[2][0] != '.')
    {
        cout << c[2][0];
        return;
    }
    if (c[2][2] == c[1][2] && c[1][2] == c[0][2] && c[2][2] != '.')
    {
        cout << c[2][2];
        return;
    }
    if (c[0][0] == c[1][1] && c[1][1] == c[2][2] && c[0][0] != '.')
    {
        cout << c[2][2];
        return;
    }
    if (c[0][2] == c[1][1] && c[1][1] == c[2][0] && c[0][2] != '.')
    {
        cout << c[0][2];
        return;
    }
    if (c[1][0] == c[1][1] && c[1][1] == c[1][2] && c[1][1] != '.')
    {
        cout << c[1][0];
        return;
    }
    cout << "DRAW";
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << endl;
    }

    return 0;
}
