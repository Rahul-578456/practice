#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[26];
    for (int i = 0; i < 26; i++)
    {

        s[i] = 0;
    }
    string str;
    cin >> str;
    for (char c : str)
    {

        s[c - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (s[i] > 0)
        {
            printf("%c ", i + 97);
            cout << ':' << " " << s[i] << endl;
        }
    }

    return 0;
}