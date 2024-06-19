#include<bits/stdc++.h>
using namespace std;

void search(){
     int n;
     cout<<"The size of array: "<<endl;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){ //inpt array loop
          cin>>arr[i];
     }
     for(auto item : arr){ //output array loop
        cout<<item<<" ";  
     }
     cout<<endl;
     int x;
     cout<<"Enter the element that needs to be searched "<<endl;
     cin>>x;
     int key=0;
     for(int i=0;i<n;i++){
          if(arr[i]==x){
               key=1; //if element is present
               cout<<"Element "<< x <<" is present and found at index: "<<i<<endl; //index of searched element
               break;
          }
     }
     if(key==0){ //if element is not present
          cout<<"Element is not present"<<endl;
     }
}

int main(){
     search();
}