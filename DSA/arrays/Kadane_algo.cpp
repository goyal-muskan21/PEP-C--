#include<iostream>
using namespace std;

int subArray(int arr[], int size){
     int max = INT16_MIN;
     int sum = 0;

     for(int i = 0; i < size; i++){
          sum += arr[i];

          if(sum > max) max = sum;
          if(sum < 0) sum = 0;
     }
     return max;
}

int main(){
     int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
     int size = sizeof(arr)/sizeof(arr[0]);
     cout << subArray(arr, size);
}