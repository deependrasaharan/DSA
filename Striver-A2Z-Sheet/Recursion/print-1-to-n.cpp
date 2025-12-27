#include <iostream>
using namespace std;

void print_nums(int n)
{
  if(n==0)
  {
    return;
  }
  print_nums(n-1);
  cout<<n<<" ";
}

int main() {

  print_nums(10);

  return 0;
}