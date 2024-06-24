#include<iostream>
using namespace std;

 int first(int arr[] , int n, int key)
 {
  int s=0;
  int e=n-1;
  int mid = (s+e)/2;
  
  int ans=-1;
  
  while(s<=e)
  {
    if (arr[mid]==key)
    {
      ans=mid;
      e=mid-1;

    }

    else if(key>arr[mid])
    {

      s=mid+1;
    }
    else if(key<arr[mid])
    {

      e=mid-1;
    }

    mid =s+(e-s)/2;

  } 
  return ans;
  }

  int last(int arr[] , int n , int key)
  {
    int s=0;
  int e=n-1;
  int mid =(s+e)/2;
  
  int ans=-1;
  
  while(s<=e)
  {
    if (arr[mid]==key)
    {
      ans=mid;
      s=mid+1;

    }

    else if(key>arr[mid])
    {

      s=mid+1;
    }
    else if(key<arr[mid])
    {

      e=mid-1;
    }

    mid =s+(e-s)/2;

  } 
  return ans;
  }

  int main()
  {
    int arr[]={1,2,3,3,5};
    cout<<"First occurence of 3 is at index:"<<first(arr, 5,3)<<endl;
    cout<<"Last occurence of 3 is at index:"<<last(arr, 5,3);
    return 0;
  }