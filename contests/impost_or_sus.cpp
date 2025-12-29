#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;

        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 's')
            {
                count++;
            }
        }

        if (n == count)
        {
            cout << 0 << endl;
            continue;
        }

        if (count == 0)
        {
            cout << (n) / 2 + 1 << endl;
            continue;
        }

        int operations = 0;
        if (s[0] == 'u')
        {
            operations++;
            s[0] = 's';
        }

        if (s[n - 1] == 'u')
        {
            operations++;
            s[n - 1] = 's';
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == 'u' && s[i + 1] != 's')
            {
                operations++;
                s[i + 1] = 's';
                i++;
            }
        }

        ans = min(operations, n - count);
        cout << ans << endl;
    }

    return 0;
}