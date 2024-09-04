#include <iostream>
#include <string>
using namespace std;

// Base Class: Employee
class Employee {
protected:
    int id;
    string name;
public:
    // Constructor
    Employee(int id, const string& name) : id(id), name(name) {}

    // Virtual Destructor
    virtual ~Employee() {
        cout << "Destructor called for Employee: " << name << endl;
    }

    // Pure virtual function for calculating salary
    virtual double calculateSalary() const = 0;

    // Getter functions
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }
};

// Derived Class: FullTimeEmployee
class FullTimeEmployee : public Employee {
private:
    double fixedSalary;
public:
    // Constructor
    FullTimeEmployee(int id, const string& name, double fixedSalary)
        : Employee(id, name), fixedSalary(fixedSalary) {}

    // Override Function: calculateSalary
    double calculateSalary() const override {
        return fixedSalary;
    }

    // Destructor
    ~FullTimeEmployee() {
        cout << "Destructor called for FullTimeEmployee: " << name << endl;
    }
};

// Derived Class: PartTimeEmployee
class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;
public:
    // Constructor
    PartTimeEmployee(int id, const string& name, double hourlyWage, int hoursWorked)
        : Employee(id, name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}

    // Override Function: calculateSalary
    double calculateSalary() const override {
        return hourlyWage * hoursWorked;
    }

    // Destructor
    ~PartTimeEmployee() {
        cout << "Destructor called for PartTimeEmployee: " << name << endl;
    }
};

// Derived Class: CommissionEmployee
class CommissionEmployee : public Employee {
private:
    double baseSalary;
    double totalSales;
    double commissionRate;
public:
    // Constructor
    CommissionEmployee(int id, const string& name, double baseSalary, double totalSales, double commissionRate)
        : Employee(id, name), baseSalary(baseSalary), totalSales(totalSales), commissionRate(commissionRate) {}

    // Override Function: calculateSalary
    double calculateSalary() const override {
        return baseSalary + (totalSales * commissionRate);
    }

    // Destructor
    ~CommissionEmployee() {
        cout << "Destructor called for CommissionEmployee: " << name << endl;
    }
};

int main() {
    // Example usage of the system
    FullTimeEmployee fte(1, "Alice", 50000);
    PartTimeEmployee pte(2, "Bob", 20, 100);
    CommissionEmployee ce(3, "Charlie", 30000, 50000, 0.1);

    cout << fte.getName() << "'s Salary: " << fte.calculateSalary() << endl;
    cout << pte.getName() << "'s Salary: " << pte.calculateSalary() << endl;
    cout << ce.getName() << "'s Salary: " << ce.calculateSalary() << endl;

    return 0;
}
