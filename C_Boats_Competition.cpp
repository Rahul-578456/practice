#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = ar[i] + ar[j];
                v.push_back(sum);
            }
        }
        // for (int i : v)
        // {
        //     cout << i << " " << endl;
        // }

        int mx = INT_MIN;
        int indx;
        map<int, int> mp;

        int ans = 0;

        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (mx < it->second)
            {
                mx = it->second;
            }
        }
        vector<int> p;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (mx == it->second)
            {
                p.push_back(it->first);
            }
        }

        // for (int num : p)
        // {
        //     cout << num << " " << endl;
        // }
        // cout << endl;
        int num;
        sort(ar, ar + n);

        for (int k = 0; k < p.size(); k++)
        {
            num = p[k];
            int i = 0;
            int cnt = 0;
            int j = n - 1;
            while (i < j)
            {
                int currentSum = ar[i] + ar[j];
                if (currentSum > num)
                {
                    j--;
                }
                else if (currentSum < num)
                {
                    i++;
                }
                else
                {
                    cnt++;
                    i++;
                    j--;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << endl;
    }

    return 0;
}
