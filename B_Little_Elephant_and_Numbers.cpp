#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll n, vector<ll>& v)
{
  while (n > 0)
  {
    ll digit = n % 10;
    if (v[digit] > 0)
      return true;
    n /= 10;
  }
  return false;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll x;
  cin >> x;
  vector<ll> v(10, 0);
  ll temp = x;
  while (temp > 0)
  {
    v[temp % 10]++;
    temp /= 10;
  }
  ll cnt = 0;
  for (ll i = 1; i <= x / i; i++)
  {
    if (x % i == 0)
    {
      ll other = x / i;
      if (check(i, v))
        cnt++;

      if (other != i && check(other, v))
        cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}