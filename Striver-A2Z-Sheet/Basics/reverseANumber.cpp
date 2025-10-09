#include <bits/stdc++.h>
using namespace std;

int main() {

  int num=0;
  int reverse=0;
  cout<<"Enter number: ";
  cin>>num;
  int n=num;
  num=abs(num);

  while(num>0)
  {
    reverse*=10;
    reverse+=num%10;
    num/=10;
  }
  if(n<0){reverse*=-1;}

  cout<<"Reverse of "<<n<<" is "<<reverse<<endl;

  return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
    
//     int original = num;
//     int reverse = 0;
//     bool negative = (num < 0);
    
//     num = abs(num);
    
//     while(num) {  // Slightly more concise than num > 0
//         reverse = reverse * 10 + num % 10;
//         num /= 10;
//     }
    
//     cout << "Reverse of " << original << " is " << (negative ? -reverse : reverse) << endl;
//     return 0;
// }
