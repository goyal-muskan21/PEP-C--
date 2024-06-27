#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][4], int target, int row, int col){
     for(int i = 0; i< row; i++){
          for(int j = 0; j< col; j++){
               if(arr[i][j] == target){
                    return true;
               }
          }
     }
     return false;
}
int main(){
     int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     int target = 18;
     cout<<isKeyPresent(arr, target, 4, 4);
}