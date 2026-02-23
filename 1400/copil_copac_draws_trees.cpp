#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> dp;
map<pair<int, int>, int> ind;

void dfs(int vert, int par)
{
    for (auto x : adj[vert])
    {
        if (x == par)
            continue;

        if (ind[{pair, vert}] < ind[{vert, x}])
        {
            dp[x] = dp[vert];
        }
        else
        {
            dp[x] = dp[vert] + 1;
        }

        dfs(x, vert);
    }
}

void solve()
{
    int n;
    cin >> n;
    adj.clear();
    adj.resize(n);
    dp.clear();
    dp.resize(n);
    ind.clear();

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        ind[{u, v}] = i;
        ind[{v, u}] = i;
    }

    ind[{-1, 0}] = -1;
    dp[0] = 1;
    dfs(0, -1);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}