#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    bool found = false;

    vector<int> p;
    vector<string> k;
    for (int i = 0; i < n; i++)
    {
        if (found == false)
        {
            if (p.empty())
            {
                p.push_back(ar[i]);
                k.push_back("1");
            }
            else if (p.back() > ar[i] && ar[0] >= ar[i])
            {
                p.push_back(ar[i]);
                k.push_back("1");
                found = true;
            }
            else if (ar[i] >= p.back())
            {
                p.push_back(ar[i]);
                k.push_back("1");
            }

            else
            {
                k.push_back("0");
            }
        }
        else
        {
            if (ar[i] <= ar[0] && ar[i] >= p.back())
            {
                p.push_back(ar[i]);
                k.push_back("1");
            }
            else
            {
                k.push_back("0");
            }
        }
    }
    for (auto it : k)
    {
        cout << it;
    }
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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define Faster
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

// int main()
// {
//     Faster;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n), taken;
//         string ans = "";
//         bool broken = false;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (taken.empty())
//             {
//                 ans.push_back('1');
//                 taken.push_back(a[i]);
//             }
//             else
//             {
//                 if (broken)
//                 {
//                     if (a[i] < taken.back())
//                     {
//                         ans.push_back('0');
//                     }
//                     else
//                     {
//                         if (a[i] > taken[0])
//                         {
//                             ans.push_back('0');
//                         }
//                         else
//                         {
//                             ans.push_back('1');
//                             taken.push_back(a[i]);
//                         }
//                     }
//                 }
//                 else
//                 {
//                     // till now, the array is sorted
//                     if (a[i] >= taken.back())
//                     {
//                         ans.push_back('1');
//                         taken.push_back(a[i]);
//                     }
//                     else
//                     {
//                         if (a[i] > taken[0])
//                         {
//                             ans.push_back('0');
//                         }
//                         else
//                         {
//                             broken = true;
//                             ans.push_back('1');
//                             taken.push_back(a[i]);
//                         }
//                     }
//                 }
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }
