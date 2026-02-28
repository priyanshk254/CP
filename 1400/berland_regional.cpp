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

        vector<int> uni(n);
        vector<long long> skill(n);

        for (int i = 0; i < n; i++)
        {
            cin >> uni[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> skill[i];
        }

        unordered_map<int, vector<long long>> uni_skill;
        for (int i = 0; i < n; i++)
        {
            uni_skill[uni[i]].push_back(skill[i]);
        }

        for (auto &it : uni_skill)
        {
            sort(it.second.begin(), it.second.end(), greater<long long>());
        }

        unordered_map<int, vector<long long>> prefix_sum;

        for (auto &it : uni_skill)
        {
            int sz = it.second.size();
            prefix_sum[it.first].resize(sz + 1);

            prefix_sum[it.first][0] = 0;
            for (size_t i = 0; i < it.second.size(); i++)
            {
                prefix_sum[it.first][i + 1] = prefix_sum[it.first][i] + it.second[i];
            }
        }

        vector<long long> result(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            for (auto &it : uni_skill)
            {
                int size = it.second.size();
                if (size >= i)
                {
                    result[i] += prefix_sum[it.first][size - size % i];
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}