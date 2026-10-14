#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
      cin >> a[i];
  int x = a[0];
  long long s = 0;
  for (int i = 1; i < n; i++)
  {
    if (x> a[i])
      s++;
    else{
      x = a[i];
      s = 1;
    }
    if (s >= k) {
      cout << x << '\n';
      return 0;
    }
  }
  cout << *max_element(a.begin(), a.end()) << '\n';
  return 0;
}