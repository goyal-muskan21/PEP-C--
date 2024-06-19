#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number of array elements: "<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter the 5 elements in the array: "<<endl;
     for(int i = 0; i<n; i++){
          cin>>arr[i];    //input user loop
     }
     // arr[0] = 5;  //updates an element value before printing the array
     for(auto item : arr){
          cout<<item<<" ";    //output loop
     }
     int value;
     cout<<"Do you want to update any value(1/2)?"<<endl;
     cin>>value;
     if(value==1){
          int pos, val;
          cout<<"Enter the position and value to update: "<<endl;
          cin>>pos>>val;
          arr[pos-1] = val;  //update the value at the given position
          for(auto item : arr){
               cout<<item<<" ";    //output loop after update
          }
     }
}