#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> bits(32);
        int ans = (1 << 31) - 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans &= a[i];
            for (int j = 0; j < 32; j++)
            {
                if (a[i] & (1 << j))
                {
                    bits[j]++;
                }
            }
        }

        for (int i = 30; i >= 0; i--)
        {
            if (k >= n - bits[i])
            {
                ans |= (1 << i);
                k -= (n - bits[i]);
            }
        }

        cout << ans << endl;
    }
}
