#include <iostream>
using namespace std;

int cnt=5;
void print_name1()
{
  if(cnt==0)
  {
    return;
  }
  cnt--;
  print_name1();
  cout<<"Deependra Singh\n";
}

void print_name2()
{
  if(cnt==0)
  {
    return;
  }
  cnt--;
  cout<<"Deependra Singh\n";
  print_name2();
}

void print_name3(int n)
{
  if(n==0)
  {
    return;
  }
 
  print_name3(n-1);
  cout<<"Deependra Singh\n";
}

int main() {

  print_name3(5);

  return 0;
}