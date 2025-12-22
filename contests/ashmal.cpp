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
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        string s = "";

        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                s = a[i];
            }
            else
            {
                if (s + a[i] < a[i] + s)
                    s = s + a[i];
                else
                    s = a[i] + s;
            }
        }

        cout << s << endl;
    }
    return 0;
}