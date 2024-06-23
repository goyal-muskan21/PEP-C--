#include <bits/stdc++.h>
using namespace std;

void fibSumSeries(int n) {
        
     vector<int> arr;
     
     arr.push_back(1);
     arr.push_back(1);

     int sum = 2;
     for(int i = 2; i < n; i++) {
          arr.push_back(arr[i-1] + arr[i-2]);
          sum = sum + arr[i];
     }
     cout << sum << endl;
     
     for(int j: arr) {
          cout << j << " ";
     }

}

int main(){
     int num, t;
     cin>>t;
     while(t--){
     cin>>num;
     fibSumSeries(num);
     cout<<endl;
     }
}