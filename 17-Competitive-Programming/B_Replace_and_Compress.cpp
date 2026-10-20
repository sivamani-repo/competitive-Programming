#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();
        set<string> st;

        // No flip
        string ans;
        ans += s[0];

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                ans += s[i];
        }

        st.insert(ans);

        // Flip at most one middle character
        for (int i = 1; i < n - 1; i++)
        {
            string temp = s;

            if (temp[i] == '1')
                temp[i] = '0';
            else
                temp[i] = '1';

            // Compress
            ans = "";
            ans += temp[0];

            for (int j = 1; j < n; j++)
            {
                if (temp[j] != temp[j - 1])
                    ans += temp[j];
            }

            st.insert(ans);
        }

        cout << st.size() << '\n';
    }

    return 0;
}