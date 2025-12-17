#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        long long n;
        cin >> n;
        cin >> s;

        long long curr = 1;
        long long maxi = 0;

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == s[i])
            {
                curr++;
            }
            else
            {
                maxi = max(maxi, curr);
                curr = 1;
            }
        }

        maxi = max(maxi, curr);

        cout << maxi + 1 << endl;
    }
}