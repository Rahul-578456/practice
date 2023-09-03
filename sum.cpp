#include <bits/stdc++.h>
using namespace std;
int k = 0;
void sum(int a)
{
    if (a == 0)
    {
        return;
    }
    k += a;
    sum(a - 1);
}

void solve()
{
    int x;
    cin >> x;
    sum(x);
    cout << k;
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
