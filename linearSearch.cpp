#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {45,12,89,78,34,23,54,67,88,87,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 78;

    int ans = linearSearch(arr,size, target);
    if(ans)
    {
        cout<<"Target Found..."<<endl;
    }
    else
    {
        cout<<"Target Not Found..."<<endl;
    }
    return 0;
}