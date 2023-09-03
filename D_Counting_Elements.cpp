#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(1001, 0);
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        v[x]++;
    }
    int res = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            res += v[i - 1];
        }
    }
    cout << res;
}