#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int c = 0, c1 = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 0)
        c1++;
}
int main()
{
    for (int i = 1; i <= 30; i++)
    {
        prime(i);
    }
    // cout<<c1<<endl;
}