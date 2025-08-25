#include<iostream>
using namespace std;
void sortZeroOne(int arr[], int size)
{
  int countZero = 0;
  int countOne = 0;

  for(int i=0; i<size; i++)
  {
    if(arr[i] == 0)
    {
      countZero++;
    }
    if(arr[i] == 1)
    {
      countOne++;
    }
  }

  int index = 0;
  while(countZero--)
  {
    arr[index] = 0;
    index++; 
  }

  while(countOne--)
  {
    arr[index] = 1;
    index++;
  }
}

int main()
{
  int arr[] = {1,0,0,0,1,1,0,1,0,1,1,0,0};
  int size = sizeof(arr)/sizeof(arr[0]);
  sortZeroOne(arr, size);

  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}