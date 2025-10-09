#include <bits/stdc++.h>
using namespace std;

int main() {

  int num;
  cout<<"Enter number: ";
  cin>>num;
  int original=num;
  int reverse=0;

  while(num)
  {
    reverse= reverse*10 + num%10;
    num/=10;
  }

  if(original==reverse)
  {
    cout<<original<<" is a palindrome!"<<endl;
  }
  else{
    cout<<original<<" is NOT a palindrome!"<<endl;
  }

  return 0;
}