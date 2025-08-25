#include<iostream>
#include<limits.h>
using namespace std;
int findMinimumInArray(int arr[], int size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {10,50,90,82,11,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findMinimumInArray(arr, size);
    cout<<"Minimum is: "<<ans<<endl;
    return 0;
}