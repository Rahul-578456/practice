#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    vector<int> s;
    vector<char> prm(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (prm[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prm[j] = false;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (prm[i])
        {
            s.push_back(i);
        }
    }

    int sum = 0;
    vector<int> l;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (n - s[i] >= 0)
        {

            n -= s[i]; 
            l.push_back(s[i]);
        }
    }

    reverse(l.begin(), l.end());

    if (n == 0)
    {
        for (auto it : l)
        {
            cout << it << " ";
        }
    }
    else
    {
        cout << "-1";
    }

    return 0;
}
