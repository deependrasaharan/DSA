#include <iostream>
using namespace std;

int fib(int n)
{
  if(n==0||n==1)
  {
    return n;
  }
  return fib(n-1)+fib(n-2);
}

int main() {

  for(int i=1;i<20;i++)
  {
    cout<<fib(i-1)<<" ";
  }

  return 0;
}

//nth fibonacci number is fib(n-1)