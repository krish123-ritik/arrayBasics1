#include<iostream>
using namespace std;
int getUnique(int arr[], int size)
{
  int ans = 0;
  for(int i=0; i<size; i++)
  {
    ans = ans^arr[i];
  }

  return ans;
}
int main()
{
  int arr[] = {1,1,2,3,3,2,7};
  int size = sizeof(arr)/sizeof(arr[0]);
  int ans = getUnique(arr,size);
  cout<<"Answer is: "<<ans<<endl;
  return 0;
}