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
        int a[n];
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == maxi)
                count++;
        }
        cout << count << endl;
    }
}