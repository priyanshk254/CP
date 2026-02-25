#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0, count = 0;
    int l = 0, r = 0;

    while (r < k)
    {
        if (a[r] < 2 * a[r + 1])
        {
            count++;
        }
        r++;
    }

    while (r < n - 1)
    {
        if (count == k)
        {
            ans++;
        }

        if (a[l] < 2 * a[l + 1])
        {
            count--;
        }
        if (a[r] < 2 * a[r + 1])
        {
            count++;
        }
        l++;
        r++;
    }

    if (count == k)
    {
        ans++;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
