#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n = 7789;
  vector<int> N1;
  int count = 0;
  while (n > 0)
  {
    N1.emplace_back(n % 10);
    n /= 10;
    count++;
  }

  vector<int> N(N1.rbegin(), N1.rend());

  for (int i = 0; i < N.size() - 1; i++)
  {
    cout << N[i] << ", ";
  }
  cout << *(N.end() - 1) << endl;

  return 0;
}