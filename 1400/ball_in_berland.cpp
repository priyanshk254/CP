#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> count1(a), count2(b); // count1[i] = how many couples include boy (i+1); count2[j] = how many include girl (j+1)

    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        count1[temp - 1]++; // convert to 0-based index and count occurrences per boy
    }

    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        count2[temp - 1]++; // convert to 0-based index and count occurrences per girl
    }

    // Start with all unordered pairs of the k couples
    long long ans = 1LL * k * (k - 1) / 2;

    // Subtract pairs that share the same boy (choose 2 among couples that use that boy)
    for (long long x : count1)
    {
        ans -= x * (x - 1) / 2;
    }

    // Subtract pairs that share the same girl
    for (long long x : count2)
    {
        ans -= x * (x - 1) / 2;
    }

    cout << ans << '\n';
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
        solve(); // process each test case independently
    }
}

/*
Time Complexity (TC): O(a + b + k)
Space Complexity (SC): O(a + b)
*/
