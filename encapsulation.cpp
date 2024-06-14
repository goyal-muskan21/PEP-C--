#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    int rollNumber, age;
    string name;
    char grade;

    public:
    Student(){
        cout<<"The student details are: "<<endl;
    }

    Student(int rollNumber, int age, string name, char grade){
        this ->rollNumber = rollNumber;
        this ->age = age;
        this ->name = name;
        this ->grade = grade;
    }

    string getName(){
        return name;
    }

    int getRollNumber(){
        return rollNumber;
    }

    int getAge(){
        return age;
    }

    char getGrade(){
        return grade;
    }

    void setName(string newName){
        name = newName;
    }

    void setRollNumber(int newRollNumber){
        rollNumber = newRollNumber;
    }

    void setAge(int newAge){
        age = newAge;
    }

    void setGrade(char newGrade){
        grade = newGrade;
    }

    void showDetails(){
        cout<<name<<endl;
        cout<<rollNumber<<endl;
        cout<<age<<endl;
        cout<<grade<<endl;
    }

};

int main(){
    Student s;
    Student s1(21, 23, "Muskan Goyal", 'A');
    s1.showDetails();

    s1.setName("Muskan");
    s1.setRollNumber(17);
    s1.setGrade('B');
    s1.setAge(22);

    s1.showDetails();
}

