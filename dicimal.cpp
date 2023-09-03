#include <bits/stdc++.h>
using namespace std;

int sum;
void fun(vector<string> &v, vector<string> &p)
{
    // reverse(v.begin(), v.end());
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0 && v[i] == "0")
        {
            sum += 0;
        }
        else if (i == 0 && v[i] == "1")
        {
            sum += 1;
        }
        else if (i == 1 && v[i] == "0")
        {
            sum += 0;
        }
        else if (i == 1 && v[i] == "1")
        {
            sum += 2;
        }
        else if (i == 2 && v[i] == "0")
        {
            sum += 0;
        }
        else if (i == 2 && v[i] == "1")
        {
            sum += 4;
        }
        else if (i == 3 && v[i] == "0")
        {
            sum += 0;
        }
        else if (i == 3 && v[i] == "1")
        {
            sum += 8;
        }
    }
    // cout << sum;

    if (sum < 10)
    {
        p.push_back(to_string(sum));
    }
    else
    {
        char k = sum + 'A' - 10;
        p.push_back(string(1, k));
        }
    // for (int j = 0; j < 4; j++)
    // {
    //     v.pop_back();
    // }
}

int main()
{
    vector<string> p;
    string b;
    cin >> b;

    int sz = b.size();
    int l = sz / 4;
    int r = sz % 4;
    vector<string> v;

    // cout << l << " " << r;
    int j = b.size() - 1;
    if (l > 0)
    {
        for (int i = 0; i < l; i++)
        {
            v.clear();
            for (int k = 0; k < 4; k++)
            {
                string c;
                c = b[j];
                v.push_back(c);
                j--;
            }
            sum = 0;
            fun(v, p);
        }
    }
    if (r > 0)
    {
        v.clear();

        for (int i = j; i >= 0; i--)
        {
            string c;
            c = b[i];
            v.push_back(c);
        }
        sum = 0;
        fun(v, p);
    }
    reverse(p.begin(), p.end());

    for (auto it : p)
    {
        cout << it;
    }

    return 0;
}
