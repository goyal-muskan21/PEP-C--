#include<bits/stdc++.h>
using namespace std;

void replace(string str){
     string val ;
     for(char c : str){
          if(c == ' '){
               val += "@9";
          }
          else{
               val += c;
          }
     }
     cout << val << endl;
}

int main(){
     string str = "This is an example sentence";
     replace(str);
}