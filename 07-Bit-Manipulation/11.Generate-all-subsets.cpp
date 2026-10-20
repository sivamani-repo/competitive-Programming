#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& a)
{
    int n = a.size();
    int cnt = (1 << n);

    vector<vector<int>> ans;

    for (int mask = 0; mask < cnt; ++mask)
    {
        vector<int> curr;

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                curr.push_back(a[i]);
            }
        }

        ans.push_back(curr);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto out = subsets(v);

    for (auto ss : out)
    {
        for (int ele : ss)
            cout << ele << " ";

        cout << endl;
    }

    return 0;
}