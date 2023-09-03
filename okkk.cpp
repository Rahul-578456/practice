#include <bits/stdc++.h>
#define ll long long int
#define llu unsigned long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k = 0, f = 0;
        cin >> n >> m;
        char y[4] = {'v', 'i', 'k', 'a'};
        char x[n + 10][m + 10];
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << x[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}