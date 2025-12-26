/*Reverse Digits of A Number

Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401. 

Input: N = 12345
Output:54321
Explanation: The reverse of 12345 is 54321.

Input: N = 7789                
Output: 9877
Explanation: The reverse of number 7789 is 9877.
*/

#include <bits/stdc++.h>
using namespace std;

int reverse_number(int number)
{
  if(number<0)
  {
    number*=-1;
  }

  int reverse=0;

  for (;number>0;number/=10,reverse*=10)
  {
    reverse+=(number%10);
  }

  return reverse/10;
}

int main() {

  int number =0;
  cout<<"Enter your number: ";
  cin>>number;
  
  cout<<"Reverse of "<<number<<" is "<<reverse_number(number)<<'.'<<endl;

  return 0;
}

//cleaner version:
/*
#include <bits/stdc++.h>
using namespace std;

int reverse_number(int x) {
    bool neg = x < 0;
    long long n = neg ? -(long long)x : (long long)x; // promote to avoid UB on INT_MIN

    long long rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (neg) rev = -rev;

    // optional: if you want to enforce 32-bit bounds
    if (rev < INT_MIN || rev > INT_MAX) {
        // handle overflow case here (e.g., return 0 or throw)
    }

    return (int)rev;
}

*/