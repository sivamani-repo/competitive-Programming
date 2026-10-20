#include <bits/stdc++.h>
using namespace std;
int solve() {
  int a, b; cin >> a >> b;
  if (a <= b) return -1;
  return min(b, a - b);
}
int main() {
  int t;  cin >> t;
  while (t--) cout << solve() << '\n';
}