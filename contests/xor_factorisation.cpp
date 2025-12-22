#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;

        if (k % 2 == 1)
        {
            for (int i = 0; i < k; ++i)
            {
                if (i)
                    cout << ' ';
                cout << n;
            }
        }
        else
        {
            cout << 0;
            for (int i = 1; i < k; ++i)
            {
                cout << ' ' << n;
            }
        }
        cout << endl;
    }
}
