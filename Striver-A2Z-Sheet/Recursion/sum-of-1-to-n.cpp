#include <iostream>
using namespace std;

int functional_sum(int n)
{
  if(n==0)
  {
    return 0;
  }
  return functional_sum(n-1) + n;
}

int parametrized_sum(int i,int sum)
{
  if(i==0)
  {
    return sum;
  }
  sum+=i;
  parametrized_sum(i-1,sum);
}

int main() {

  cout<<"Sum = "<<parametrized_sum(10,0)<<endl;
  cout<<"Sum = "<<functional_sum(10)<<endl;

  return 0;
}