//stl - standard default library

#include <bits/stdc++.h>
using namespace std;

// class template

template <class T>
class Number{
     private:
     T num1, num2;

     public:
     Number(T number, T n){
          num1 = number;
          num2 = n;
     }

     T getNum(){
          return num1 + num2;
     }
};

int main(){
     Number<int> num(10, 20);
     cout << num.getNum();
}