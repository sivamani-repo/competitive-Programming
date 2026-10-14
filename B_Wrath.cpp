#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
 
signed main() {
    fastio;
 
    int n;
    cin >> n;
 
    vector<int> l(n);
    for (auto &x : l) cin >> x;
 
    int alive = 0;
    int r = n;
 
    for (int i = n - 1; i >= 0; --i) {
 
        if (i < r)
            ++alive;
 
        
        r = min(r, i - l[i]);
    }
 
    cout << alive << '\n';
}