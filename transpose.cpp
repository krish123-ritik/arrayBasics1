// #include <iostream>
// using namespace std;
// void transpose(int arr[][3], int row, int col ) {
  
//   for(int i=0; i<row; i++) {
    
//     for(int j=i; j<col; j++) {
      
//       swap(arr[i][j], arr[j][i]);
      
//     }
//   }
// }
// void printArray(int arr[][3], int row, int col)
// {
//   for(int i=0; i<row; i++)
//   {
//     for(int j=0; j<col; j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }
// int main() 
// {
//   int arr[3][3] = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
//   };
//   int row = 3;
//   int col = 3;
//   transpose(arr,row, col);
//   printArray(arr,row, col);

//   return 0;
//}


#include <iostream>
using namespace std;

void transpose(int arr[][4], int row, int col) {
    int trans[4][3];  // notice: col x row

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            trans[j][i] = arr[i][j];  // swap indices
        }
    }

    // print transposed matrix
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row = 3, col = 4;

    transpose(arr, row, col);

    return 0;
}


