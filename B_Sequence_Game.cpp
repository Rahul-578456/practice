#include <bits/stdc++.h>
using namespace std;
int k = 0;
void solve()
{
    int n;
    cin >> n;
    int ar[n];

    for (auto &it : ar)
    {
        cin >> it;
    }

    vector<int> v;

    v.push_back(ar[0]);

    for (int i = 1; i < n; i++)
    {
        if (ar[i - 1] < ar[i])

        {
            v.push_back(ar[i]);
        }
        else if (ar[i - 1] == ar[i])
        {

            v.push_back(ar[i]);
        }
        else
        {
            v.push_back(1);
            v.push_back(ar[i]);
        }
    }
    cout << v.size() << endl;
    for (auto it : v)
        cout << it << " ";
    cout << endl;
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
