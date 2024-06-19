//reverseArray

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[5]){
     for(int i = 4; i >= 0; i--){
          cout<<arr[i]<<" "<<endl;
     }
}

int main(){
     int arr[5] = {1,3,5,7,9};
     reverseArray(arr);
}