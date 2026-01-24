#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        long long sum = 0;
        long long maxi = 0;

        for (int i = 0; i < n; i++)
        {
            long long a, b, c;
            cin >> a >> b >> c;

            sum += a * (b - 1);

            long long gain = a * b - c;
            maxi = max(maxi, gain);
        }

        if (sum >= x)
        {
            cout << 0 << endl;
            continue;
        }

        if (maxi <= 0)
        {
            cout << -1 << endl;
            continue;
        }

        long long remaining = x - sum;

        long long rollbacks = (remaining + maxi - 1) / maxi;

        cout << rollbacks << endl;
    }

    return 0;
}
