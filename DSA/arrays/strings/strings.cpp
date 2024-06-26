#include<iostream>
using namespace std;

void lengthArr(char arr[]){
     int count = 0;
     for(int i=0; arr[i]!='\0'; ++i){
          count++;
         
     }
      cout << count;

}

int main(){
     char arr[]={'M','u','s','k','a','n','\0'};
     lengthArr(arr);
     return 0;
}