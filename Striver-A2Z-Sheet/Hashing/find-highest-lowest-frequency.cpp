#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map <int,int> mp;
  int size;
  int inp;

  cout<<"Enter how many elements: ";
  cin>>size;

  for(int i=0;i<size;i++)
  {
    cout<<"Enter number: ";
    cin>>inp;
    mp[inp]++;
  }  

  int high=0,hcount=0,lcount=INT32_MAX,low=0;
  for(auto x:mp)
  {
    if(x.second>hcount)
    {
      high=x.first;
      hcount=x.second;
    }
    if(x.second<lcount)
    {
      low=x.first;
      lcount=x.second;
    }
  }

  cout<<"Least frequent element "<<low<<" occurs "<<lcount<<" times.\n";
  cout<<"Most frequent element "<<high<<" occurs "<<hcount<<" times."<<endl;

  return 0;
}