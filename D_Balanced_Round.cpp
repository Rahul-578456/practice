#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int x;
    cin >> n >> x;
    vector<int> ar(n);
    for (auto &it : ar)
        cin >> it;

    sort(ar.begin(), ar.end());
    // for (int i = 0; i < n; i++)
    // {

    //     cout << ar[i] << " ";
    // }

    int sum = 0;
    int ans = 0;
    int i = 0;
    int p = 1;
    while (i != n)
    {
        sum = 0;
        for (int j = p; j < n;)
        {
            if (abs(ar[j - 1] - ar[j]) <= x)
            {
                sum++;
                p++;
            }
            else
            {
                j++;
                p = j;
                break;
            }
        }
        ans = max(sum, ans);
    }
    // cout << n - sum;
    cout << ans << endl;
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