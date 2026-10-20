#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
    cin >> v[i];
  for(int mask = 0; mask < (1 << n); mask++){
    for(int i = 0; i < n; i++)
        if(mask & (1 << i))
          cout <<v[i] << " ";
      cout << "-"<< '\n';}
  return 0;
}