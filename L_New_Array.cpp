#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    vector<int> ar1(n);
    vector<int> ar2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ar2[i];
    }
    vector<int> ar3(ar2);
    ar3.insert(ar3.end(), ar1.begin(), ar1.end());
    for (int i = 0; i < ar3.size(); i++)
    {
        cout << ar3[i] << " ";
    }

    return 0;
}