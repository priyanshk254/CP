#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> x(n);
        for (int i = 0; i < n; ++i)
            cin >> x[i];

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            long long left = x[i] - x[i - 1];
            long long right = x[i + 1] - x[i];
            if (left <= right)
                ans++;
        }
        ans++;
        cout << ans << endl;
    }
}
