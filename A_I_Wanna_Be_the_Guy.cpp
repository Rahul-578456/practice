#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int flag = 1;
    int flag1 = 1;

    int ar[n + 1] = {0};
    for (int i = 1; i <= x; i++)
    {
        int p;
        cin >> p;
        ar[p] = 1;
    }
    int y;
    cin >> y;
    int ar1[n + 1] = {0};
    for (int i = 1; i <= y; i++)
    {
        int p;
        cin >> p;
        ar[p] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        flag = 1;
        flag1 = 1;

        if (ar[i] == 0)
        {
            flag = 0;
        }
        if (ar1[i] == 0)
        {
            flag1 = 0;
        }
        if (flag == 0 && flag1 == 0)
        {
            break;
        }
    }
    if (flag == 0 && flag1 == 0)
    {
        cout << "Oh, my keyboard!";
    }
    else if (flag == 1 && flag == 1)
    {
        cout << "I become the guy.";
    }

    return 0;
}