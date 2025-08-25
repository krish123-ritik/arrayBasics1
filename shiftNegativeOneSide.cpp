#include<iostream>
using namespace std;
void shiftNegBy1(int arr[], int size)
{
  int j=0; 
  for(int i=0; i<size; i++)
  {
    if(arr[i] < 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
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
  int arr[] = {9,-7,8,1,-5,3,-9};
  int size = sizeof(arr)/sizeof(arr[0]);
  shiftNegBy1(arr, size);
  printArray(arr, size);

  return 0;

}