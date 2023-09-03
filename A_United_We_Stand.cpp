#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ans = min(ans, ar[i]);
    }
    int flag = 0;

    for (int i = 1; i < n; i++)
    {
        if (ar[0] != ar[i])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "-1" << endl;
        return;
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == ans)
        {
            b.push_back(ar[i]);
        }
    }

    sort(ar.begin(), ar.end(), greater<int>());
    vector<int> c;
    for (int i = 0; i < (ar.size() - b.size()); i++)
    {
        c.push_back(ar[i]);
    }
    cout << b.size() << " " << c.size() << endl;
    for (auto it : b)
        cout << it << " ";
    cout << endl;
    for (auto it : c)
        cout << it << " ";
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