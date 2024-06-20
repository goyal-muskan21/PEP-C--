#include<bits/stdc++.h>
using namespace std;

void fibbSum(int nums){
    int a = 0, b = 1, sum = 0;
    while(b <= nums){
     sum += b;
     int temp = a + b;
     a = b;
     b = temp;
     // cout<<a<<" "<<b;
     }
     cout << sum << endl;
}

int main(){
     int t;
     cin>>t;
     int nums;
     while(t-->0){ 
          cin>>nums;
          fibbSum(nums);
     }
}