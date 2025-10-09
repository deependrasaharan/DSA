
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
  if(number<=1)
  {
    return false;
  }
  if(number%2==0)
  {
    return false;
  }

  for(int n=3;n*n<=number;n+=2)
  {
    if(!(number%n))
    {
      return false;
    }
  }
  return true;
}

int main() {

  int num;
  cout<<"Enter number: ";
  cin>>num;
  
  if(isPrime(num))
  {
    cout<<num<<" is a prime number!"<<endl;
  }
  else
  {
    cout<<num<<" is a NOT a prime number!"<<endl;
  }

  return 0;
}






// suggestions:
// // Consider adding input validation
// if (cin.fail()) {
//     cout << "Invalid input!" << endl;
//     return 1;
// }

// You could also optimize slightly for even numbers:
// cpp
// if (number == 2) return true;
// if (number % 2 == 0) return false;
// // Then start loop from 3, increment by 2
// for(int n = 3; n * n <= number; n += 2)


// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int number)
// {
//   if(number<=1)
//   {
//     return false;
//   }

//   for(int n=2;n*n<=number;n++)
//   {
//     if(!(number%n))
//     {
//       return false;
//     }
//   }
//   return true;
// }

// int main() {

//   int num;
//   cout<<"Enter number: ";
//   cin>>num;
  
//   if(isPrime(num))
//   {
//     cout<<num<<" is a prime number!"<<endl;
//   }
//   else
//   {
//     cout<<num<<" is a NOT a prime number!"<<endl;
//   }

//   return 0;
// }