//stl - standard default library

#include <bits/stdc++.h>
using namespace std;

// class template

template <class T>
class Calculator{
     private:
     T num1, num2;

     public:
     Calculator(T number, T n){
          num1 = number;
          num2 = n;
     }

     T addNum(){
          return num1 + num2;
     }

     T substractNum(){
          return num1 - num2;
     }

     T multiplyNum(){
          return num1*num2;
     }

     T divideNum(){
          return num1/num2;
     }
};

template <typename T>
T add(T a, T b){
     cout<< a+b;
}

int main(){
     Calculator<int> a(10, 20);
     Calculator<float> b(5.5, 6.5);
     cout << a.addNum()<<endl;
     cout << b.substractNum()<<endl;
     cout << a.multiplyNum()<<endl;
     cout << b.divideNum()<<endl;
     add(20,30);
}