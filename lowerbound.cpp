//given a sorted array of N integers and an integer x, wap to find the lower bound of x.

//the lower bound also finds the first or smallest index in a sorted array where the value at that index is greater than or equal to the given key i.e. x
//lower bound of an array is the index of the value in the given array which is greater than or equal to the x  
//upper bound is arr[index]>x

#include<bits/stdc++.h>
using namespace std;

int main(){
     int size,x;
     cin>>size>>x;
     int arr[size];
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
     int start=0,end=size-1;
     int ans=-1;
     while(start<=end){
          int mid=(start+end)/2;
          if(arr[mid]>=x){
               ans=mid;
               end=mid-1;
          }
          else{
               start=mid+1;
          }
     }
     cout<<"Lower bound of "<<x<<" is at index "<<ans<<endl;
     return 0;
}
