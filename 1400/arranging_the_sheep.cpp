#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> sheep;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            sheep.push_back(i);
        }
    }

    int tot = sheep.size();
    int index = (tot - 1) / 2;

    int ans = 0;

    for (int i = 0; i < tot; i++)
    {
        ans += abs(sheep[i] - (sheep[index] + i - index));
    }
    cout << ans << "\n";
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}