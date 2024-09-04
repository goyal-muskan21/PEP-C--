#include<bits/stdc++.h>
using namespace std;

class Employee {
     protected:
     int id;
     string name;
     public:
     Employee() : id(0), name("") {}
     Employee(int id, string name) {
          this->id = id;
          this->name = name;
     }
     virtual ~Employee() {
          cout << "Destructor called for Employee" << endl;
     }
     virtual double calculateSalary() const = 0;
     string getName(){
          return name;
     }
     int getId() {
          return id;
     }
};

class FullTimeEmployee : public Employee {
     private:
     double fixedSalary;
     public:
     FullTimeEmployee(int id, string name, double fixedSalary) {
          this->fixedSalary = fixedSalary;
     }
     double calculateSalary() {
          return fixedSalary;
     }
};

class PartTimeEmployee : public Employee {
     private:
     double hourlyWage;
     int hoursWorked;
     public:
     PartTimeEmployee(int id, string name, double hourlyWage, int hoursWorked) {
          this->hourlyWage = hourlyWage;
          this->hoursWorked = hoursWorked;
     }
     double calculateSalary() {
          return hourlyWage * hoursWorked;
     }
};

class ComissionEmployee : public Employee {
     private:
     double baseSalary;
     double totalSales;
     double commissionRate;
     public:
     ComissionEmployee(int id, string name, double baseSalary, double commissionRate,double totalSales) {
          this->baseSalary = baseSalary;
          this->commissionRate = commissionRate;
          this->totalSales = totalSales;
     }
     double calculateSalary() {
          return baseSalary + (totalSales * commissionRate);
     }
};