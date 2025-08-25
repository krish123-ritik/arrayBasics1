#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    int size = v.size();
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void print2(vector<int> v)
{
    cout<<"Method 2: "<<endl;
    for(auto it : v)
    {
        cout<< it <<" "<<endl; 
    }
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    
    vector<char> ch;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('c');
    ch.push_back('d');
    ch.push_back('e');

    cout<<"Front ELement: "<<ch[0]<<endl;
    cout<<"Front Element: "<<ch.front()<<endl;
    cout<<"End Element: "<<ch.back()<<endl;

    //vector initialization...
    vector<int> y(5, -1); //intialize with n size and specific data..
    y.push_back(50);
    print(y);
    vector<int> arr3 = {1,2,3,4,5};
    arr3.pop_back();
    vector<int> arr4{1,2,3,4,5,6};

    //in vector, dont tell size of vector.
    //just keep inserting, it will manage the allocations.
    //vector<int> v; // array hi hai.
    
    //How to copy Vector...
    vector<int>arr8 = {1,3,5,7,9};
    vector<int>arr9(arr8);


    //insertion...
    vector<int> arr6;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int d;
        cin>>d;
        arr6.push_back(d);
    }

    //for clearing the vector
    v.clear();
    v.push_back(70);


    //for pop
    v.pop_back();

    return 0;
}