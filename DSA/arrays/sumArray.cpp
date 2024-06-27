#include<iostream>
using namespace std;

int sum(int arr[][4], int row, int col){
     int sum = 0;
     for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
               sum += arr[i][j];
          }
     }
     return sum;
}

int main(){
     int arr[2][4] = {{2,4,6,8},{1,3,5,7}};
     int value = sum(arr, 2, 4);
     cout<<value;
}