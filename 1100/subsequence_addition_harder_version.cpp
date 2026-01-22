#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v[0] != 1)
    {
        cout << "No" << endl;
        return;
    }

    ll sum = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] > sum)
        {
            cout << "No" << endl;
            return;
        }
        sum += v[i];
    }

    cout << "Yes" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
