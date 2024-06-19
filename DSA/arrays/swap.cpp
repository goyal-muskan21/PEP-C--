#include<bits/stdc++.h>
using namespace std;

// void swapArray(){
//      int n;
//      cout<<"Array Size: "<<endl;
//      cin>>n;
//      int arr[n];
//      cout<<"Array is: "<<endl;
//      for(int i=0;i<n;i++){
//           cin>>arr[i];
//      }
//      for(auto item : arr){ 
//         cout<<item<<" ";  
//      }
//      cout<<endl;
//      for(int i=0;i<n/2;i++){
//                swap(arr[i],arr[n-i-1]);
//      }
//      for(int i=0;i<n;i++){
//                     cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }

// int main(){
//      int t;
//      cin>>t;
//      while(t--){
//           swapArray();
//      }
// }

// void swapArray(int arr[], int size){
//      for(int i=0;i<size/2;i++){
//           swap(arr[i],arr[size-i-1]);
//      }

// }

void func(int a , int b, int c){
     cout<<a<<" "<<b<<" "<<c<<endl;
     swap(a,b);
     swap(b,c);
     swap(a,c);
     cout<<a<<" "<<b<<" "<<c<<endl;
}

int main(){
     func(2,4,6);
}