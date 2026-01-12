#include <bits/stdc++.h>
using namespace std;

long long minMoves(long long n, long long k)
{
    if (n == k)
        return 0;
    if (k > n)
        return -1;

    queue<pair<long long, long long>> q;
    unordered_set<long long> visited;

    q.push({n, 0});
    visited.insert(n);

    while (!q.empty())
    {
        auto [size, moves] = q.front();
        q.pop();

        long long left = size / 2;
        long long right = (size + 1) / 2;

        for (int newSize : {left, right})
        {
            if (newSize == k)
            {
                return moves + 1;
            }

            if (newSize > k && visited.find(newSize) == visited.end())
            {
                visited.insert(newSize);
                q.push({newSize, moves + 1});
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << minMoves(n, k) << endl;
    }

    return 0;
}