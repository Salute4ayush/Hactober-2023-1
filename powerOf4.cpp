#include<bits/stdc++.h>
using namespace std;
bool powerOfFour(int n)
{
if(n<=0)
  return false;
while(n>1){
if(n%4!=0) return false;
n/=4;
}
if(n==1) retur  true;
return false;
}
int main()
{
  int n; cin>>n;
  if(powerOfFour(n)==1) return true;
  else return false;
  return 0;
}
