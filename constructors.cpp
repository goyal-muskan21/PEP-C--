#include<bits/stdc++.h>
using namespace std;

// class Employee {
//     public:
//     int empID;
//     int empSalary;
//     Employee(){
//         cout<<"A constructor is created and called"<<endl;
//     }

//     //must create a default constructor before a parameterized constructor

//     Employee(int ID){
//             empID = ID;
//     }

//     Employee(int id, int salary){
//         empID = id;
//         empSalary = salary;
//     }

//     void displayID(){
//         cout<<"Employee ID is: "<<empID<<endl;
//     }

//     void display(){
//         cout<<"Employee ID is: "<<empID<<endl;
//         cout<<"Employee's salary is: "<<empSalary<<endl;
//     }
// };

// int main(){
//     Employee e1;
//     Employee e2(210);
//     Employee e3(200, 25000);

//     e2.displayID();
//     e3.display();
// }

class Student {
    public:
    string name;
    int rollno;

    Student(){
        cout<<"The details of the Student are: "<<endl;
    }

    Student(string name , int rollno){
        this->name = name;
        this->rollno = rollno;
    }

    Student(Student &st){
        name = st.name;
        rollno = st.rollno;
    }

    void display(){
        cout<<"The name of the student is: "<<name<<endl;
        cout<<"And the roll number is: "<<rollno<<endl;
    }
};

int main(){
    Student s;
    Student s1("Muskan Goyal", 17);
    Student s2(s1);

    cout<<"Copied value with the help of copy constructor "<<endl;
    cout<<s2.name<<endl;
    cout<<s2.rollno<<endl;

    s1.display();
}

//only one destructor is created for a class

//static memory deletes memory automatically - for example --> constructor and destructor
//in dynamic we need to delete the memory - for example--> pointers we need a delete keyword
//this keyword differentiates the parameter names if we have same name
//copy constructor - when an object copies the other object

