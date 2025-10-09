#include <bits/stdc++.h>
using namespace std;

int count(int number)
{
  int cnt=0;
  for(;number>0;number/=10,++cnt)
  {}
  return cnt;
}

bool armstrong(int number)
{
  int sum=0;
  int original=number;
  int cnt=count(number);
  while(number>0)
  {
    sum+=pow((number%10),cnt);
    number/=10;
    
  }

  if(sum==original)
  {
    return true;
  }
  
  return false;
}

int main()
{
  int num;
  cout<<"Enter your number: ";
  cin>>num;

  if(armstrong(num))
  {
    cout<<num<<" is a valid armstrong number!";
  }
  else
  {
    cout<<num<<" is not a valid armstrong number!";
  }
  return 0;
}







// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//   int num;
//   cout<<"Enter number: ";
//   cin>>num;
//   int original=num;

//   int cubesum=0;
//   num=abs(num);

//   while(num)
//   {
//     cubesum+=pow(num%10,3);
//     num/=10;
//   }

//   if(original==cubesum)
//   {
//     cout<<original<<" is an armstrong number!"<<endl;
//   }
//   else{
//     cout<<original<<" is NOT an armstrong number!"<<endl;
//   }

//   return 0;
// }