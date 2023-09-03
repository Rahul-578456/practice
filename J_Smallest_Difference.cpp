#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> freq(100005, 0); // Adjust the size based on the range of values

    while (t--)
    {
        int n;
        cin >> n;

        // Clear the frequency array for each test case
        fill(freq.begin(), freq.end(), 0);

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
        }

        int ans = 0;
        for (int i = 1; i < freq.size() - 1; i++)
        {
            ans = max(ans, freq[i] + freq[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}
