#include<iostream>
using namespace std;
int main()
{
  int x,i;
  if(x>0 && (x&(x-1))==0) cout<<"YES";//so what happens here is in case of power of 2 number we will have only one set bit and remaining unset so if we just minus that number with 1 and make '&' then we will get 0 because the previous number bits will be completely oppo
    else cout<<"NO";
  return 0;
}