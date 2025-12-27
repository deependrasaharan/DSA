#include <iostream>
#include <map>
using namespace std;

int main() {

  map<int,int> mp;
  int inpt;

  for(int i=0;i<5;i++)
  {
    cout<<"Enter number: ";
    cin>>inpt;
    mp[inpt]++;
  }

  for(auto x:mp)
  {
    cout<<x.first<<" -> "<<x.second<<endl;
  }

  return 0;
}