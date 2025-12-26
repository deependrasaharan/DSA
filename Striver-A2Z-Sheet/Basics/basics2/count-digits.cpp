/*
Given an integer N, return the number of digits in N. 

Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789              
Output: 4
Explanation: The number 7789 has 4 digits.  
*/
#include <bits/stdc++.h>
using namespace std;


int count_digits(int number) //O(logN +1) time, O(1) space
{
  int digits=1;
  if(number<0)
  {
    number*=-1;
  }
  for(int i=0;number>9;number/=10)
  {
    ++digits;
  }
  return digits;
}

int return_digits(int number) //O(1) time, O(1) space although this constant time in itself might be very expensive. To find what is the benefit/slight loss in using this implementation instead of count_digits
{
  if(number==0)
  {
    return 1;
  }

  if(number<0)
  {
    number*=-1;
  }

  return int(log10(number))+1;
}


int main() {

  int number=0;
  cout<<"Enter number: ";
  cin>>number;

  cout<<number<<" has "<<count_digits(number)<<" digits."<<endl;
  cout<<number<<" has "<<return_digits(number)<<" digits."<<endl;

  return 0;
}