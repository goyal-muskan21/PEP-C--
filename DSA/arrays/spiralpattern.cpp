// #include<iostream>
// using namespace std;

// void spiralPatternMatrix(int arr[][5], int row, int col){
//      int topRow = 0, leftCol = 0, bottomRow = row, rightCol = col;
//      while(topRow <= bottomRow && leftCol <= rightCol){
//           for(int i = leftCol; i <= rightCol; i++){
//                cout << arr[topRow][i] << " ";
//           }
//      topRow++;
//      for(int i = topRow; i <= bottomRow; i++){
//           cout << arr[i][rightCol - 1] << " ";
//      }
//      rightCol--;
//      if(topRow <= bottomRow){
//           for(int i = rightCol; i >= leftCol; i--){    
//                cout << arr[bottomRow][i] << " ";
//           }
//           bottomRow--;
//      }
//      if(leftCol <= rightCol){
//           for(int i = bottomRow; i >= topRow; i--){
//                cout << arr[i][leftCol] << " ";
//           }
//           leftCol++;
//      }
//      }
// } 

// int main(){
//      int arr[5][5] = {{1, 2, 3, 4,5} , {6,7,8,9,10} , {11,12,13,14,15} , {16,17,18,19,20}};
//      spiralPatternMatrix(arr, 4, 5);
// }

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tr = 0;
    int br = 2;
    int lc = 0;
    int rc = 2;
    while(tr <= br && lc <= rc) {
        // print top row
        for(int i = lc; i <= rc; i++) {
            cout << arr[tr][i] << " ";
        }
        tr++;
        // print right col
        for(int i = tr; i <= br; i++) {
            cout << arr[i][rc] << " ";
        }
        rc--;
        // print bottom row
        for(int i = rc; i >= lc; i--) {
            cout << arr[br][i] << " ";
        }
        br--;
        // print left col
        for(int i = br; i >= tr; i--) {
            cout << arr[i][lc] << " ";
        }
        lc++;
    }

    return 0;
}