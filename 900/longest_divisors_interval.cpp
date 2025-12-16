#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Read the integer n for each test case
        long long n;
        cin >> n;

        // Initialize i to 1, which will be used to find the maximum interval
        int i = 1;
        // Increment i until n is not divisible by i
        while (n % i == 0) // O(60)
            i++;
        // Output the size of the maximum interval
        cout << i - 1 << endl;
    }
    return 0;
}