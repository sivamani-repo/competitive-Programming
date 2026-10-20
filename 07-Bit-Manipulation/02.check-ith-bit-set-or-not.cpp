#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n>>i;
  if( n & ( 1 << i ) )
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}