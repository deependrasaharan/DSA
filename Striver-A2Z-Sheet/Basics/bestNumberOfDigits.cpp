#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cout<<"Enter number: ";
  cin>>n;

  int digits=1;
  if(n!=0)
  {
    digits=log10(abs(n))+1;
  }

  cout<<n<<" has "<<digits<<" digits"<<endl;

  return 0;
}