#include <bits/stdc++.h>
using namespace std;

int euclideanAlgorithmHcf(int n1, int n2)
{
  if(n1==n2)
  {
    return n1;
  }
  if()

  while(n1>0&&n2>0)
  {
    if(n1<n2)
    {
      swap(n1,n2);
    }
    n1%=n2;
  }

  return max(n1,n2);

}

int main() {

  int n1,n2;
  


  return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// inline int min(int &n1, int &n2)
// {
//   return (n1<n2)?n1:n2;
// }

// int gcd(int &n1, int &n2)
// {
//   int hcf=1;
//   for(int i=2;i<=min(n1,n2);i++)
//   {
//     if(n1%i==0 && n2%i==0)
//     {
//       hcf=i;
//     }
//   }
//   return hcf;
// }

// int main() {
  
//   int n1,n2;
//   cout<<"Enter first number: ";
//   cin>>n1;
//   cout<<"Enter second number: ";
//   cin>>n2;

//   cout<<"HCF of "<<n1<<" and "<<n2<<" is: "<<gcd(n1,n2)<<endl;

//   return 0;
// }