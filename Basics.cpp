#include<iostream>
using namespace std;
int main()
{
    //Reference Variable:-  same memory location, different names... 
    int arr1[6] = {1,2,3,4,5,6};
    int size = 6;
    int arr2[] = {15,12,16,18,11,20,22};
    int size2 = 7;

    //Array Creeation...
    int arr[10];
    char ch[102];
    bool flag[103];
    long long arr3[104];

    cout<<"Array Created Successfully..."<<endl;

    int a = 5;
    cout<<"Size of a: "<<sizeof(a)<<endl;
    cout<<"Address of a: "<<&a<<endl;

    cout<<"Size of arr: "<<sizeof(arr)<<endl;
    cout<<"Base Address of arr is: "<<&arr<<endl;
    // cout<<"Base Address of arr is: "<<arr<endl; :- it will show address of the first element but here it's not working...
    

    //int drr[2] = {1,2,3,44,5}; ❌ Error (too many initializers).

    //int arr[50] = {5,8,9,12,13}; ✔️ Valid (rest filled with 0).
    
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }

    //Taking input in an array...
    int brr[5];
    int n=5;
    cout<<"Enter the input: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
    }

    //Doubles-up....
    for(int i=0; i<n; i++)
    {
        arr[i] = 2*arr[i];
    }

    
    return 0;
}