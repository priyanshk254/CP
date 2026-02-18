#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k >= 3)
    {
        cout << 0 << '\n';
        return;
    }

    vector<long long> differences;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            differences.push_back(abs(a[i] - a[j]));
        }
    }

    sort(differences.begin(), differences.end());

    long long ans = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        ans = min(ans, a[i]);
    }

    ans = min(ans, differences[0]);

    if (k == 2)
    {

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(differences.begin(), differences.end(), a[i]);
            if (it != differences.end())
            {
                ans = min(ans, abs(*it - a[i]));
            }
            if (it != differences.begin())
            {
                --it;
                ans = min(ans, abs(*it - a[i]));
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
