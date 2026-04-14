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
        string s, t;
        cin >> s >> t;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (t[i] == 'b' && s[i] == 'a')
                {
                    int j = i;
                    while (j < n && s[j] == 'a')
                        j++;

                    if (j == n || s[j] != 'b')
                    {
                        cout << "NO\n";
                        goto end;
                    }

                    s[i] = 'b';
                    s[j] = 'a';
                }
                else if (t[i] == 'c' && s[i] == 'b')
                {
                    int j = i;
                    while (j < n && s[j] == 'b')
                        j++;

                    if (j == n || s[j] != 'c')
                    {
                        cout << "NO\n";
                        goto end;
                    }

                    s[i] = 'c';
                    s[j] = 'b';
                }
                else
                {
                    cout << "NO\n";
                    goto end;
                }
            }
        }
        cout << "YES\n";
    end:;
    }
    return 0;
}