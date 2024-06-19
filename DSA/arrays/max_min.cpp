#include<bits/stdc++.h>
using namespace std;

void maxElement(){
     int arr[5] = {2,6,4,3,10};
     int max = INT16_MIN;
     for(int i= 0; i < 5; i++){
     if(arr[i]>max){
          max=arr[i];
     }
     }
     cout<<max;
}

void minElement(){
     int arr[5] = {2,6,4,3,10};
     int min = INT16_MAX;
     for(int i= 0; i < 5; i++){
          if(arr[i]<min){
               min=arr[i];
          }
     }
     cout<<min;
}

int main(){
     maxElement();
     cout<<endl;
     minElement();
}
