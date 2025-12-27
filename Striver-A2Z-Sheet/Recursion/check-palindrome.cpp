#include <iostream>
using namespace std;

bool check_palindrome(int* arr,int i, int n)
{
  if(i>=n/2)
  {
    return true;
  }
  if(arr[i]!=arr[n-i-1])
  {
    return false;
  }
  return check_palindrome(arr,i+1,n);
}

int main() {

  int a[]={1,2,3,2,1,3};
  cout<<check_palindrome(a,0,sizeof(a)/sizeof(int));

  return 0;
}