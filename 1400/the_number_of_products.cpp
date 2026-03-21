#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Prefix counts by parity of negatives seen so far:
    // even = number of prefixes with even count of negatives (start with empty prefix)
    // odd = number of prefixes with odd count of negatives
    int odd = 0, even = 1;
    bool cur = 0;      // parity of negatives in current prefix (0 = even, 1 = odd)
    long long ans = 0; // total number of subarrays with positive product

    for (int i = 0; i < n; i++)
    { // iterate over each end index
        if (arr[i] < 0)
            cur = 1 - cur; // flip parity if current element is negative

        if (cur == 0)
        {
            // Current prefix has even parity: positive subarrays ending at i
            // equal the number of previous even prefixes
            ans += even;
            even++;
        }
        else
        {
            // Current prefix has odd parity: positive subarrays ending at i
            // equal the number of previous odd prefixes
            ans += odd;
            odd++;
        }
    }

    // Total subarrays = n * (n + 1) / 2
    // Negative = total - positive, Positive = ans
    cout << 1LL * n * (n + 1) / 2 - ans << ' ' << ans << '\n';
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

/*
Time Complexity (TC): O(n)
Space Complexity (SC): O(1)
*/
