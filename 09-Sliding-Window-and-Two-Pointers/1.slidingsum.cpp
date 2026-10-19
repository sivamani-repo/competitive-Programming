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
    x[i] = (a * x[i - 1] + b) % 11;
  int sum = 0;
  int i = 0;
  while (i < k) {
    sum += x[i];
    i++;
  }
  int ans = sum;
  int j = 0;
  for (int i = k; i < n; i++) {
    sum -= x[j];
    sum += x[i];
    j++;
    ans ^= sum;
  }
  cout << ans;
  return 0;
}