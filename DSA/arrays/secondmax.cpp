#include<iostream>
using namespace std;

void secondMax(int arr[5]){
     int max1 = INT16_MIN;
     for(int i = 0 ; i < 5; i++){
          if(arr[i]>max1){
               max1 = arr[i];
          }
     }
     cout<<max1<<endl;
     int max2 = INT16_MIN;
     for(int i = 0; i < 5; i++){
          if(arr[i]>max2 && arr[i] != max1){
               max2 = arr[i];
          }
     }
     cout<<max2;
}

int main(){
     int arr[5]={5,2,9,8,9};
     secondMax(arr);
}