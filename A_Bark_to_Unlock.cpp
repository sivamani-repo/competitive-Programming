/* Algo Discuss with GreedyMani:
At first glance, the problem tags might suggest trying all possible combinations, but let's go greedy! If the current word matches the password, we can return true; otherwise, we just need to check whether the required characters can be combined in a different sequence. Instead of generating all combinations, a simple logical rule makes the solution easier. (Note: The password and every word consist of exactly two letters, and all words are unique, as mentioned in the problem statement.)
*/
#include <bits/stdc++.h>
using namespace std;
bool helper(string p, int n){
  bool first = false, last = false;
  for (int i = 0; i < n; i++){
    string c;cin >> c;
    if (c == p) return true;
    if (c[1] == p[0]) first = true;
    if (c[0] == p[1]) last = true;
  }
  return first && last;
}
int main(){
  string p;cin >> p;
  int n;cin >> n;
  cout << (helper(p, n) ? "YES" : "NO");
  return 0;
}