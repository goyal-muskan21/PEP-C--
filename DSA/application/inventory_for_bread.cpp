#include<bits/stdc++.h>
using namespace std;

class Bread {

     private:
     string type_of_bread;
     int quantity;
     string expiration_date;

     public:
     Bread(string type, int quantity, string expiration)
        : type_of_bread(type), quantity(quantity), expiration_date(expiration) {}
     
     string getType() const {
        return type_of_bread;
    }

    int getQuantity() const {
        return quantity;
    }

    void setQuantity(int qty) {
        quantity = qty;
    }

    string getExpirationDate() const {
        return expiration_date;
    }

    void display() const {
        cout << type_of_bread << ": " << quantity << " loaves, expires on " << expiration_date << endl;
    }

};