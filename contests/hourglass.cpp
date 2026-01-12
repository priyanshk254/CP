#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long s, k, m;
        cin >> s >> k >> m;

        int flips = m / k;
        long long rem = m % k;

        if (flips % 2 == 0)
        {
            long long ans = max(s - rem, 0LL);
            cout << ans << endl;
        }
        else
        {
            long long ans = max(min(s, k) - rem, 0LL);
            cout << ans << endl;
        }
    }
}