#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long x;
        cin >> x;

        long long plus = x;  // take first element as +
        long long minus = 0; // nothing taken yet as -

        for (int i = 1; i < n; i++)
        {
            cin >> x;

            long long newPlus = max(plus, minus + x);
            long long newMinus = max(minus, plus - x);

            plus = newPlus;
            minus = newMinus;
        }

        cout << plus << '\n';
    }
}
