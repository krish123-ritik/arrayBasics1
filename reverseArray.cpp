#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size-1;
  while(start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
void printArray(int arr[], int size)
{
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main() 
{
  int arr[] = {1,5,8,11,15,17,19};
  int size = sizeof(arr)/sizeof(arr[0]);
  reverseArray(arr, size);
  printArray(arr, size);
  return 0;
}