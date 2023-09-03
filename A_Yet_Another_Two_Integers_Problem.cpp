#include <bits/stdc++.h>
using namespace std;
void solve1()
{
    int n, k;
    cin >> n >> k;
    if (n == k)
    {
        cout << 0 << endl;
        return;
    }
    else if (n < k)
    {
        int p = (k - n) / 10;
        if ((k - n) % 10 == 0)
        {
            cout << p << endl;
        }
        else
        {
            cout << p + 1 << endl;
        }
        return;
    }
    else if (n > k)
    {
        int p = (n - k) / 10;
        if ((n - k) % 10 == 0)
        {
            cout << p << endl;
        }
        else
        {
            cout << p + 1 << endl;
        }
        return;
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    if (n == m)
    {
        cout << 0 << endl;
        return;
    }
    else if (m > n)
    {
        int i = 10;
        while (m != n)
        {
            if (n + i <= m)
            {
                n += i;
                cnt++;
            }
            else
            {
                i -= 1;
            }
        }
    }
    else if (m < n)
    {
        int i = 10;
        while (m != n)
        {
            if (n - i >= m)
            {
                n -= i;
                cnt++;
            }
            else
            {
                i -= 1;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve1();
    }

    return 0;
}
