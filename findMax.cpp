#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {14,98,78,42,78,99,14};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findMax(arr,size);
    cout<<"Maximum is: "<<ans<<endl;
    return 0;
}