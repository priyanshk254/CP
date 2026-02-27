#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> part1;

        vector<int> part2;

        for (int i = 0; i < x; i++)
        {
            int temp;
            cin >> temp;
            part1.push_back(temp);
        }

        for (int i = x; i < y; i++)
        {
            int temp;
            cin >> temp;
            part2.push_back(temp);
        }

        for (int i = y; i < n; i++)
        {
            int temp;
            cin >> temp;
            part1.push_back(temp);
        }

        auto smallest_rotation = [](vector<int> &v)
        {
            int len = v.size();
            if (len == 0)
                return;

            int minIndex = 0;
            for (int i = 1; i < len; i++)
            {
                if (v[i] < v[minIndex])
                    minIndex = i;
            }

            vector<int> temp(len);
            for (int i = 0; i < len; i++)
            {
                temp[i] = v[(minIndex + i) % len];
            }

            v = temp;
        };

        smallest_rotation(part2);

        int pivot = part2[0];
        bool inserted = false;

        for (int i = 0; i < part1.size(); i++)
        {
            if (!inserted && part1[i] > pivot)
            {

                for (int j = 0; j < part2.size(); j++)
                {
                    cout << part2[j] << " ";
                }
                inserted = true;
            }

            cout << part1[i] << " ";
        }

        if (!inserted)
        {
            for (int j = 0; j < part2.size(); j++)
            {
                cout << part2[j] << " ";
            }
        }

        cout << endl;
    }
}