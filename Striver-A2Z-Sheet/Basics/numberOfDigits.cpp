// find number of digits

#include <bits/stdc++.h>
using namespace std;

int main()

{
  int n;
  cout<<"Enter number: ";
  cin>>n;
  int N=n;
  
  int count=0;

  if(n==0)
  {
    count=1;
  }
  else{
    n=abs(n);
    for(;n>0;n/=10,++count){}
  }

  cout<<N<<" has "<<count<<" digits."<<endl;

  return 0;

}