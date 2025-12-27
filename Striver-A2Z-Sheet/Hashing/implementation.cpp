#include <iostream>
using namespace std;

int main() {

  int arr[]={1,3,2,1,3};

  int hash[13]={0};

  for(int i=0;i<5;i++)
  {
    hash[arr[i]]++;
  }

  for(int i=0;i<5;i++)
  {
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Frequency of "<<number<<" is "<<hash[number]<<endl;
  }

  return 0;
}