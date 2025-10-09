#include <bits/stdc++.h>
using namespace std;

int main() {

  int num;
  cout<<"Enter number: ";
  cin>>num;

  if(num==0)
  {
    cout<<"Divisors of 0 are all numbers except 0 itself";
  }

  int original=num;
  num=abs(num);

  vector<int>divisors;

  for(int i=1;i<=sqrt(num);i++)
  {
    if(num%i==0)
    {
      divisors.emplace_back(i);
      if(i!=num/i)
      {
        divisors.emplace_back(num/i);
      }
    }
  }
  if(original<0)
  {
    int maxpositiveelements=divisors.size();
    for(int i=0;i<maxpositiveelements;i++)
    {
      divisors.emplace_back(-divisors[i]);
    }
  }

  sort(divisors.begin(),divisors.end());

  cout<<"Divisors of "<<original<<" are: ";
  for(int i: divisors)
  {
    cout<<i<<" ";
  }
  

  return 0;
}



// #include <iostream>
// #include <vector>
// #include <algorithm>

// std::vector<int> findDivisorsOptimal(int number) {
//     if (number == 0) return {};
    
//     const int original = number;
//     const int abs_num = std::abs(number);
//     std::vector<int> divisors;
    
//     // Optimized algorithm: check 1, then odd numbers only if not divisible by 2
//     divisors.emplace_back(1);
//     if (abs_num > 1) divisors.emplace_back(abs_num);
    
//     if (abs_num % 2 == 0 && abs_num > 2) {
//         divisors.emplace_back(2);
//         if (abs_num != 2) divisors.emplace_back(abs_num / 2);
//     }
    
//     // Check odd numbers from 3 up to sqrt
//     for (int i = 3; i * i <= abs_num; i += 2) {
//         if (abs_num % i == 0) {
//             divisors.emplace_back(i);
//             if (i != abs_num / i) {
//                 divisors.emplace_back(abs_num / i);
//             }
//         }
//     }
    
//     // Handle negative numbers
//     if (original < 0) {
//         const auto positive_count = divisors.size();
//         for (size_t i = 0; i < positive_count; ++i) {
//             divisors.emplace_back(-divisors[i]);
//         }
//     }
    
//     std::sort(divisors.begin(), divisors.end());
//     return divisors;
// }














// #include <bits/stdc++.h>
// using namespace std;

// bool isDivisor(int dividend, int divisor)
// {
//   if(dividend%divisor)
//   {
//     return false;
//   }
//   return true;
// }

// int main() {

//   int num;
//   cout<<"Enter number: ";
//   cin>>num;
//   // vector<int>divisors;

//   if(num==0)
//   {
//     cout<<"All numbers except 0 itself are divisors of 0"<<endl;
//     return 0;
//   }

//   cout<<"Divisors of "<<num<<" are: ";
//   for(int i=1;i<=(num/2);i++)  //this doesnt work for 1 because 1<0 returns false, wow
//   {
//     if(isDivisor(num,i))
//     {
//       // divisors.emplace_back(i);
//       cout<<i<<" ";
//     }
//   }
//   cout<<num<<endl;

//   return 0;
// }