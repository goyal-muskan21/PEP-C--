#include<bits/stdc++.h>
using namespace std;

// int main(){
//      string str = "naman";
//      string str1 = str;
//      reverse(str.begin(),str.end());
//      if(str1 == str){
//           cout<<"True";
//      }else{
//           cout<<"False";
//      }
// }

void rev(char arr[], int size){
     int start = 0;
     int end = size - 1;
     while(start < end){
          if(arr[start] = arr[end]){
               cout<<"True";
               break;
          }
          else{
          cout<<"false";
          break;
          }
     }

}

int main(){
     char arr[]= {'m','a','l','a','y','a','l','a','m'};
     rev(arr,9);
}