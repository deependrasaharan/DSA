#include <iostream>
using namespace std;

void reverse_array(int* arr,int l, int r)
{
  if(l>=r)
  {
    return;
  }
  int temp=arr[l];
  arr[l]=arr[r];
  arr[r]=temp;
  reverse_array(arr, l+1,r-1);
}

int main()
{
  int a[]={1,2,3,4,5,6,7,8,9,0};
  reverse_array(a,0,sizeof(a)/sizeof(int)-1);
  for(int x:a)
  {
    cout<<x<<" ";
  }
}

// void reverse(int* arr,int i,int N)
// {
//   if(i>N/2)
//   {
//     return;
//   }
//   int temp=arr[i];
//   arr[i]=arr[N-i-1];
//   arr[N-i-1]=temp;
//   reverse(arr,i+1,N);
// }

// int main() {

//   int a[]={1,2,3,4,5};

//   reverse(a,0,5);

//   for(int x:a)
//   {
//     cout<<x<<" ";
//   }

//   return 0;
// }