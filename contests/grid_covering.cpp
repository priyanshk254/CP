#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        // Key conditions for visiting all n*m tiles:
        // 1. gcd(a, n) must equal 1 (to reach all rows)
        // 2. gcd(b, m) must equal 1 (to reach all columns)
        // 3. gcd(n, m) must be <= 2
        //
        // Reasoning:
        // Starting with H: positions (k*a, k*b) and (k*a, (k+1)*b)
        // Starting with V: positions (k*a, k*b) and ((k+1)*a, k*b)
        // Due to alternation constraint and modular arithmetic:
        // - Need gcd(a,n)=1 and gcd(b,m)=1 to reach all rows/columns
        // - Need gcd(n,m)<=2 for positions to cover entire grid

        long long g_a = gcd(a, n);
        long long g_b = gcd(b, m);
        long long g_nm = gcd(n, m);

        if (g_a == 1 && g_b == 1 && g_nm <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}