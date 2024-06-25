#include<iostream>
using namespace std;

void sorting(int arr[], int size){
     for(int i=0; i<size-1; i++){
          for(int j=i+1; j<size; j++){
               if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     for(int i = 0; i < size; i++){
          cout << arr[i] << " ";
     }
}

int main(){
     int arr[5] = {30, 7, 20, 1, 5};
     sorting(arr, 5);
}