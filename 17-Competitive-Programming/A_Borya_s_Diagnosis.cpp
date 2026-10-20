#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;  cin >> n;
  int md = 0;
  for (int i = 0; i < n; i++)
  {
    int pd, ad;
    cin >> pd >> ad;
    int d = max(md + 1, pd);
    while ((d - pd) % ad != 0)
      d++;
    md = d;
  }
  cout << md << '\n';
  return 0;
}
