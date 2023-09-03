#include <bits/stdc++.h>
using namespace std;
int s = 0;
void sum(int k, vector<long long int> &v)
{
    s += v[k];
}
void solve()
{
    vector<long long int> v(4);
    for (int i = 1; i <= 4; i++)
    {
        cin >> v[i];
    }

    string num;
    cin >> num;
    vector<int> p;
    int i = 0;
    while (i < num.size())
    {
        int k = (num[i] - '0');
        sum(k, v);
        i++;
    }
    // int i = 0;
    // int sum = 0;
    // while (i < p.size())
    // {
    //     int l = p[i];
    //     sum += v[l];
    //     i++;
    // }
    // cout << sum;
    cout << s;
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
