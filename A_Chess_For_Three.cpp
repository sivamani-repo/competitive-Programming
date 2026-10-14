#include<iostream>
using namespace std;
int helper(int w,int s)
{
  for(int i=1;i<=3;++i)
  {
    if(i==w || i==s)
      continue;
    return i;
  }
  return 0;
}
int main()
{
  int n,s=3;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int w;
    cin>>w;
    if(w!=s)
      s=helper(w,s);
    else
    {
      cout<<"NO"; return 0;
    }
  }
  cout<<"YES";
  return 0;
}