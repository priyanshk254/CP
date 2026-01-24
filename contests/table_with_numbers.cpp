#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int h, l;
        cin >> h >> l;

        int a = min(h, l);
        int b = max(h, l);

        int c1 = 0, c2 = 0;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= a)
            {
                c1++;
            }
            else if (x > a && x <= b)
            {
                c2++;
            }
        }

        ans = min(c1, c2);

        c1 -= c2;

        if (c1 > 0)
        {
            ans += c1 / 2;
        }

        cout << ans << endl;
    }
}