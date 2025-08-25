#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printArray(int arr[][4], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void columnWisePrint(int arr[][4], int row, int col)
{
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool findTarget(int arr[][4], int row, int col, int target)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int findMaximum(int arr[][4], int row, int col)
{
  int maxAns = INT_MIN;
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
    {
      if(arr[i][j] > maxAns)
      {
        maxAns = arr[i][j];
      }
    }
  }
  return maxAns;
}
int findMinimum(int arr[][4], int row, int col)
{
  int minAns = INT_MAX;
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++)
    {
      if(arr[i][j] < minAns)
      {
        minAns = arr[i][j];
      }
    }
  }
  return minAns;
}
void rowWiseSum(int arr[][4], int row, int col)
{
  for(int i=0; i<row; i++)
  {
    int sum = 0;
    for(int j=0; j<col; j++)
    {
      sum = sum + arr[i][j];
    }
    cout<<"Sum iS: "<<sum<<endl;
  }
}
int main() 
{

  //create a 2d Array...
  int arr[3][3];

  //initialize 
  int arr4[3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };
  int row = 3;
  int col = 4;
  int target = 90;
  printArray(arr4, row, col);
  columnWisePrint(arr4, row, col);
  int mini = findMinimum(arr4, row, col);
  int maxi = findMaximum(arr4, row, col);
  cout<<"Maxi is: "<<maxi<<endl;
  cout<<"Mini is: "<<mini<<endl;
  rowWiseSum(arr4, row, col);
  int ans = findTarget(arr4, row, col, target);
  if(ans)
  {
    cout<<"Target Found..."<<endl<<endl;
  }
  else
  {
    cout<<"Target Not Found..."<<endl<<endl;
  }


  int drr[][4] = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,1,11}
  };

  int arr8[] = {10,20,30};
  int size = sizeof(arr8)/sizeof(arr8[0]);

  for(int i=0; i<size; i++)
  {
    for(int j=0; j<size; j++)
    {
        cout<<arr[i]<<", "<<arr[j]<<endl;
    }
  }

  int arr2[] = {1,2,3,4,};
  int n = 4;

  for(int i=0; i<n; i++ ) {
   for(int j=0; j<n; j++) {
     for(int k=0; k<n; k++) {
       cout << arr2[i] <<" " << arr2[j] << " " << arr2[k] << endl;
     }
   }
  }

  //2D Vector
  vector<vector<int>> crr;
  vector<int> wer1(10, 7);
  vector<int> wer2(7, 5);
  vector<int> wer3(9,2);
  vector<int> wer4(8,5);
  vector<int> wer5(3,4);
  crr.push_back(wer1);
  crr.push_back(wer2);
  crr.push_back(wer3);
  crr.push_back(wer4);
  crr.push_back(wer5);
  for(int i=0; i<crr.size(); i++)
  {
    for(int j=0; j<crr.size(); j++)
    {
      cout<<crr[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
};