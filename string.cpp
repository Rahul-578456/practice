#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.size();
    // cout << l;
    if ((s[0] < 'A' || s[0] > 'z') or (s[l - 1] < 'A' || s[l - 1] > 'z'))
    {
        cout << "NO";
        return 0;
    }
    bool found = true;

    for (int i = 1; i <= 6; i++)
    {
        if (s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9' && s[i] != '0')
        {
            found = false;
            break;
        }
    }
    if (found == true && s[1] != '0' && l == 8)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}