#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  int a, b, c;
  cin >> x[0] >> a >> b >> c;
  for (int i = 1; i < n; i++)
    x[i] = (1LL * a * x[i - 1] + b) % c;
  int ans = 0;
  for (int i = 0; i <= n - k; i++)
  {
    int mn = INT_MAX;
    for (int j = i; j < i + k; j++)
      mn = min(mn, x[j]);
    ans ^= mn;
  }
  cout << ans << '\n';
  return 0;
}
