#include <bits/stdc++.h>
using namespace std;

main()
{
    long long int n, k, x;
    cin >> n >> k >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    long long int cnt = 1;
    vector<long long int> c;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > x)
        {
            long long int p = v[i] - v[i - 1];
            if (p % x == 0)
            {
                c.push_back(p / x - 1);
            }
            else
            {
                c.push_back(p / x);
            }
            cnt++;
        }
    }

    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++)
    {
        if (k < c[i])
        {
            break;
        }
        k -= c[i];
        cnt--;
    }
    cout << cnt << endl;
}
