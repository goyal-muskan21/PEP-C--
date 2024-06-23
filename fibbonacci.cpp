#include<bits/stdc++.h>
using namespace std;

// void fibSeries(){
//      int n;
//      cin>>n;
//      int t1 = 0; 
//      int t2 = 1;
//      int nextTerm = 0;
//      for (int i = 1; i<=n ; ++i) {
//         if(i == 1) {
//             cout << t1 << ", ";
//             continue;
//         }
//         if(i == 2) {
//             cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
        
//         cout << nextTerm << ", ";
//      }
     
// }

// void fibbSum(int nums){
//     int a = 0, b = 1, sum = 0;
//     while(b <= nums){
//      sum += b;
//      int temp = a + b;
//      a = b;
//      b = temp;
//      cout<<a<<" "<<b;
//      }
//      // int t1 = 1; 
//      // int t2 = 1;
//      // int nextTerm;
//      // int sum = 0;
//      // // int a;
//      // for (int i = 1; i<=nums ; ++i) {
//      //    if(i == 1) {
//      //        cout << t1 ;
//      //        continue;
//      //    }
//      //    if(i == 2) {
//      //        cout << t2 ;
//      //        continue;
//      //    }
//      //    nextTerm = t1 + t2;
//      //    t1 = t2;
//      //    t2 = nextTerm;
        
//      //    cout << nextTerm ;
//      // }
//      // cout<<endl;
//      // for(int i = 1; i < nextTerm ; i++){
//      //      // a = nextTerm + i;
//      //      if(nextTerm % i == 0){
//      //           sum += i;
//      //           }
//      // }
//      // // sum = a;
//      // cout << sum << endl;
     
// }

// int main(){
//      int t;
//      cin>>t;
//      int nums;
//      while(t-->0){ 
//           cin>>nums;
//           fibbSum(nums);
//           // fibSeries();
//      }
// }


void fibSum(int number){
     int a = 1, b = 1, sum = 2, temp, count = 2;
     while(count <= number){
          temp = a + b;
          a = b;
          b = temp;
          sum += temp;
          count++;
     }
     cout << sum << endl;
}
void fibSeries(){
     int t1 = 1, t2 = 1, nextTerm = 0, n;
     cin >> n;
     cout << t1 << " " << t2 << " ";
     for(int i = 3; i <= n; ++i){
          nextTerm = t1 + t2;
          t1 = t2;
          t2 = nextTerm;
          cout << nextTerm << " ";
     }
     cout << endl;
}

int main(){
     int t;
     cin>>t;
     int nums;
     while(t-->0){ 
          cin>>nums;
          fibSum(nums);
          fibSeries();
     }
}