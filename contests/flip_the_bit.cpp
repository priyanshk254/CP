#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        bool all_same = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i != 0 && a[i] != a[i - 1])
            {
                all_same = false;
            }
        }
        int p;
        cin >> p;

        if (all_same)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 0;

        if (a[p - 1] == 0)
        {

            int l = 0, r = n - 1;
            int min_l = -1, max_r = -1;

            while (l < p - 1)
            {
                if (a[l] == 1)
                {
                    min_l = l;
                    break;
                }
                l++;
            }

            while (r > p - 1)
            {
                if (a[r] == 1)
                {
                    max_r = r;
                    break;
                }
                r--;
            }

            int c = 1;
            if (min_l != -1)
            {

                for (int i = min_l + 1; i < p; i++)
                {
                    if (a[i - 1] != a[i])
                    {
                        c++;
                    }
                }
                ans = max(ans, c);
            }

            c = 1;
            if (max_r != -1)
            {
                for (int i = p; i <= max_r; i++)
                {
                    if (i > 0 && a[i - 1] != a[i])
                    {
                        c++;
                    }
                }
                ans = max(ans, c);
            }
        }
        else
        {
            int l = 0, r = n - 1;
            int min_l = -1, max_r = -1;

            while (l < p - 1)
            {
                if (a[l] == 0)
                {
                    min_l = l;
                    break;
                }
                l++;
            }

            while (r > p - 1)
            {
                if (a[r] == 0)
                {
                    max_r = r;
                    break;
                }
                r--;
            }

            int c = 1;

            if (min_l != -1)
            {
                for (int i = min_l + 1; i < p; i++)
                {
                    if (a[i - 1] != a[i])
                    {
                        c++;
                    }
                }
                ans = max(ans, c);
            }

            c = 1;
            if (max_r != -1)
            {
                int c = 1;
                for (int i = p; i <= max_r; i++)
                {
                    if (i > 0 && a[i - 1] != a[i])
                    {
                        c++;
                    }
                }
                ans = max(ans, c);
            }
        }

        if (ans % 2 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
}