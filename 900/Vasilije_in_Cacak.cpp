#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, k;
        cin >> n >> k >> x;

        long long total = n * (n + 1) / 2;
        long long min = k * (k + 1) / 2;
        long long max = total - (((n - k) * (n - k + 1)) / 2);
        if (x >= min && x <= max)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}