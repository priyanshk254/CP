#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop(); // remove valid pair
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}