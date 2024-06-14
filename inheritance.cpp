#include<bits/stdc++.h>
using namespace std;

class Student{
     private:
     string name;
     int roll;

     public:
     void setdata(string n,int r){
          name=n;
          roll=r;
     }

     void showdata(){
          cout<<"Name: "<<name<<endl;
          cout<<"Roll: "<<roll<<endl;
     }

     protected:
     void display(){
          cout<<"The Changed Details are: "<<endl;
     }
};

class Records : public Student {
     public:
     void show(){
          cout<<"The Students Records are: "<<endl;
     }

     void details(){
          display();
     }
};

int main(){
Records r1;
Student s1,s2;
s1.setdata("Rahul",101);
s2.setdata("Raj",102);
r1.show();
s1.showdata();
r1.details();
s2.showdata();
}

//Inheritance helps us create a new class(derived/child class) from an exsisting class(base/parent class)
//Here, Records is the derived class and Student is the base class. Records(derived class) inherits all the properties of Student(base class) and can even have additional features of its own
//protected and public methods and data variables are only accessible by parent and child class