/*Check if a number is Palindrome or Not

Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Examples

Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
Example 2:
Input:N = 7789          
Output: Not Palindrome
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome*/

#include <bits/stdc++.h>
using namespace std;

//a better approcah is only reversing half the number

bool check_palindrome(int number)
{
  number=(number<0)?(number*-1):number;
  int copy=number;
  int reverse=0;
  while(number>0)
  {
    int last=number%10;
    reverse = reverse*10 + last;
    number/=10;
  }
  if(copy==reverse)
  {return true;}
  return false;
}

int main() {

  int number =0;

  cout<<"Enter number: ";
  cin>>number;

  cout<<number<<" is ";
  if(!check_palindrome(number))
  {
    cout<<"NOT";
  }
  cout<<" a palindrome."<<endl;

  return 0;
}