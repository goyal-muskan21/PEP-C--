#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
     for(int i = 1; i < size; i++){
          int j = i;
          while(j > 0 && arr[j-1]>arr[j]){
               swap(arr[j-1], arr[j]);
               j--;
          }
     }
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
}

int main(){
     int arr[5] = {30, 7, 20, 1, 5};
     insertionSort(arr,5);
}
