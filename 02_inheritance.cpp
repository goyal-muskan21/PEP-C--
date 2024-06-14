#include<bits/stdc++.h>
using namespace std;

class base{
	public:
		void show(){
			cout<<"Base class"<<endl;
		}
		
		
};

class derived : public base {
	public:
		void display(){
			cout<<"Derived class"<<endl;
		}
};

class child : public derived {
	public:
		void print(){
			cout<<"Child class"<<endl;
		}
};
	
int main(){
//	derived d1;
//	 base *ptr = &d1;
//	 ptr->show();
//	 d1.display();
	child c1;
	base *ptr = &c1;
	ptr->show();
	c1.display();
	c1.print();
}

//in multiple inheritance we face an ambiguity that two parent class that has a same child inherited class has same name functions or variables we need to differ it   by scope resolution operator
//like class A : public B,public C
//base class pointer can access only base class functions not child class
//derived d1  d1.Base::print();
//derived class pointer can access all