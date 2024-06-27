#include<iostream>
using namespace std;

// int maxRowSum(int arr[][3], int row, int col){
//      int maxSum = 0;
//     for (int i = 0; i < row; ++i) {
//         int sum = 0;
//         for (int j = 0; j < col; ++j) {
//             sum += arr[i][j];
//         }
//         if (sum > maxSum) {
//             maxSum = sum;
//         }
//     }
//     return maxSum;
// }

// int main(){
//      int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
//      cout << maxRowSum(arr, 3, 3);
// }

#include <iostream>
using namespace std;

pair<int, int> maxRowSum(int arr[][3], int row, int col) {
    int maxSum = 0;
    int maxRowIndex = 0;
    for (int i = 0; i < row; ++i) {
        int sum = 0;
        for (int j = 0; j < col; ++j) {
            sum += arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRowIndex = i;
        }
    }
    return {maxSum, maxRowIndex};
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    pair<int, int> result = maxRowSum(arr, 3, 3);
    cout << "Maximum row sum: " << result.first << " found in row: " << result.second << endl;
    return 0;
}
