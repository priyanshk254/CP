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

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        int i = 0, j = 0;

        long long ans = 1;

        while (j < n)
        {

            while (i < n && a[i] > b[j])
            {
                i++;
            }

            ans = (ans * (i - j)) % 1000000007;
            j++;
        }

        cout << ans << endl;
    }
}