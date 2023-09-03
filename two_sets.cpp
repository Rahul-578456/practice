#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    bool found = false;
    long long int result;
    result = (n * (n + 1)) / 2;
    long long int l = result / 2;
    if (result % 2 == 1)
    {
        printf("NO");
    }
    else
    {
        found = true;
    }
    vector<int> s1;
    vector<int> v1;
    if (found == true)

    {
        for (int i = n; i > 0; i--)
        {
            if (l - i >= 0)
            {
                s1.push_back(i);
                l -= i;
            }
            else
            {

                v1.push_back(i);
            }
        }
    }
    if (found)
    {

        int p = s1.size();
        int k = v1.size();
        cout << "YES"
             << " ";
        cout << p << " ";

        for (int i = 0; i < p; i++)
        {
            cout << s1[i] << " ";
        }
        cout << k << " ";
        for (int i = 0; i < k; i++)
        {
            cout << v1[i] << " ";
        }
    }
}