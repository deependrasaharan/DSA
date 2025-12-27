#include <iostream>
using namespace std;

void print_nums(int n)
{
  if(n==0)
  {
    return;
  }
  cout<<n<<" ";
  print_nums(n-1);
}

int main() {

  print_nums(10);

  return 0;
}