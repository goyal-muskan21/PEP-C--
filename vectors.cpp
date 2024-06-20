#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int> arr = {1,2,3,4};   // without = also this works only in vectors

     arr.push_back(10);
     cout<<arr[2]<<endl;
     arr.at(2)=21;

     for(int item : arr){
          cout << item << " ";
     }
}