// #include <iostream>
// using namespace std;

// void patternMatrix(int arr[][3], int row, int col) {
//     for (int c = 0; c < col; ++c) {
//         if (c % 2 == 0) {
//             for (int r = 0; r < row; ++r) {
//                 cout << arr[r][c] << " ";
//             }
//         } else {
//             for (int r = row - 1; r >= 0; --r) {
//                 cout << arr[r][c] << " ";
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     patternMatrix(arr, 3, 3);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int col = 0;
    
//     while(col < 4) {
//         int row = 0;
//         if(col % 2 == 0) {
//             while (row < 3) {
//                 cout << arr[row][col] << " ";
//                 row++;
//             }
//             cout << endl;
//             col++;
            
//         } else {
//             row = 2;
//             while (row >= 0) {
//                 cout << arr[row][col] << " ";
//                 row--;
//             }
//             cout << endl;
//             col++;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int col = 0;
    
    while(col < 4) {
        int row = 0;
        if(col % 2 == 0) {
            while (row < 3) {
                cout << arr[row][col] << " ";
                row++;
            }
            cout << endl;
            col++;
            
        } 
        if(col % 2 != 0) {
            row = row - 1;
            while (row >= 0) {
                cout << arr[row][col] << " ";
                row--;
            }
            cout << endl;
            col++;
        }
    }
    return 0;
}