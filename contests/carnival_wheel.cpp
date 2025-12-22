#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, a, b;
        cin >> l >> a >> b;

        b = b % l;

        if (b == 0)
        {
            cout << a << endl;
            continue;
        }

        if (b == 1)
        {
            cout << l - 1 << endl;
            continue;
        }

        unordered_set<int> seen;
        int maxi = a;

        while (true)
        {
            if (seen.find(a) != seen.end())
            {
                cout << maxi << endl;
                break;
            }

            seen.insert(a);
            maxi = max(maxi, a);
            a = (a + b) % l;
        }
    }
}