#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<long long> psum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            psum[i + 1] = psum[i] + a[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long total = psum[l - 1] + (l - r + 1) * 1LL * k + (psum[n] - psum[r]);

            if (total % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}