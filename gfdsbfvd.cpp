#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, sum1, sum2, sum3;
    scanf("%d", &n);
    int a = n % 10;
    sum = n / 10;
    sum1 = sum / 10;
    sum2 = sum1 / 10;
    sum3 = sum2 / 10;

    int b = sum % 10;
    int c = sum1 % 10;
    int d = sum2 % 10;
    for (int i = n; i < 2000; i++)
    {
        cout << i;
    }
}

return 0;
}