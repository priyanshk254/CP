#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        long long total = b;
        while (n--)
        {
            long long x;
            cin >> x;
            total += min(x, a - 1);
        }
        cout << total << endl;
    }
}