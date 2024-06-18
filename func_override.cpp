#include<bits/stdc++.h>
using namespace std;

class Base{
     public:
     virtual void print(){
          cout << "Base class" << endl;
     }
};

class Derived : public Base {
     public:
     void print() override{
          cout << "Derived class" << endl;
     }
};

int main(){
     Derived d1;
     Base *ptr = &d1;
     ptr->print();
}
