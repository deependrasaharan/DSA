/*Find GCD of two numbers

Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
Examples

Example 1:
Input: N1 = 9, N2 = 12

Output: 3
Explanation:
Factors of 9: 1, 3, 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3
Greatest common factor: 3 (GCD)

Example 2:
Input: N1 = 20, N2 = 15

Output: 5
Explanation:
Factors of 20: 1, 2, 4, 5, 10, 20
Factors of 15: 1, 3, 5, 15
Common Factors: 1, 5
Greatest common factor: 5 (GCD)
*/

#include <bits/stdc++.h>
using namespace std;

int find_hcf(int n1,int n2)
{
  if(n1<n2)
  {
    swap(n1,n2);
  }

  int hcf=1;

  for(int i=2;i<=n2;i++)
  {
    if((n1%i==0)&&(n2%i==0))
    {
      hcf=i;
    }
  }
  return hcf;
}

int main() 
{
  int n1,n2;
  cout<<"Enter number 1: ";
  cin>>n1;
  cout<<"Enter number 2: ";
  cin>>n2;

  cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<find_hcf(n1,n2)<<endl;

  return 0;

}