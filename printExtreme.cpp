#include<iostream>
using namespace std;
void printExtreme(int arr[], int size)
{
  int start = 0;
  int end = size-1;
  while(start <= end)
  {
    if(start == end)
    {
      cout<<arr[start]<<" ";
    }
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;
  }
  cout<<endl;
}
int main()
{
  int arr[] = {2,4,6,8,10,12,14,16,18,20};
  int size = sizeof(arr)/sizeof(arr[0]);
  printExtreme(arr,size);
  return 0;
}