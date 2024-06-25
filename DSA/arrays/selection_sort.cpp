#include<iostream>
using namespace std;

void sortArr(int arr[], int size){
     for(int i =0; i<size-1; i++){
          int min=arr[i];
          for(int j=i+1; j<size; j++){
               if(min>arr[j]){
                    swap(arr[i], arr[size-1]);
               }
          }          
     }
     for(int i=0; i<size; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
     int arr[6]={17, 27, 20, 60, 30, 5};
     sortArr(arr, 6);
}
 
 