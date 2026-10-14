#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin >> s;
  int ans = 3;
  for(int a = 0; a < 10; ++a)for(int b = 0; b < 10; ++b)for(int c = 0; c < 10; ++c)for(int d = 0; d < 10; ++d)for(int e = 0; e < 10; ++e)for(int f = 0; f < 10; ++f)
  if(a + b + c == d + e + f)
  {
    int ck = 0;if(a != s[0] - '0') ck++;if(b != s[1] - '0') ck++;if(c != s[2] - '0') ck++;if(d != s[3] - '0') ck++;if(e != s[4] - '0') ck++;if(f != s[5] - '0') ck++;
    if(ck < ans)   ans = ck;
  }
  cout << ans;
  return 0;
}