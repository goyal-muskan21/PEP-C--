//pure virtual functions
//if a function doesnot have any use in the base class but the function must be implemented by all its derived classes

#include<bits/stdc++.h>
using namespace std;

class Definition{
     public:
     virtual void salary() = 0; //pure virtual function
};

class Lecturer : public Definition {
     public:
     void salary() override{
          cout << "Salary is fixed" << endl;
     }
};

class GuestLecturer : public Definition {
     public:
     void salary() override{
          cout << "Salary is hourly" << endl;
     }
};

int main(){
     GuestLecturer d;
     Lecturer l;
     string emp1;
     cout<<"Enter the below Options: "<<endl;
     cout<<"1. Lecturer"<<endl;
     cout<<"2. GuestLecturer"<<endl;
     cout << "Enter the type of lecturer: ";
     cin>>emp1;
     if(emp1 == "Lecturer"){
          l.salary();
     }
     else if(emp1 == "GuestLecturer"){
          d.salary();
     }
     // Definition *ptr = &d;
     // ptr->salary();
     // Definition *ptr1 = &l;
     // ptr1->salary();
}
