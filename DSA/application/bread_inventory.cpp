#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Bread {
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

private:
    string type_of_bread;
    int quantity;
    string expiration_date;
};

class BreadInventory {
public:
    void addBread(const Bread& bread) {
        auto it = inventory.begin();
        while (it != inventory.end() && it->getExpirationDate() <= bread.getExpirationDate()) {
            ++it;
        }
        inventory.insert(it, bread);
        cout << "Added " << bread.getQuantity() << " loaves of " << bread.getType() << " to inventory." << endl;
    }

    void removeBread(const string& breadType, int quantity) {
        for (auto it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->getType() == breadType) {
                if (it->getQuantity() >= quantity) {
                    it->setQuantity(it->getQuantity() - quantity);
                    cout << "Removed " << quantity << " loaves of " << breadType << " from inventory." << endl;
                    if (it->getQuantity() == 0) {
                        inventory.erase(it);
                    }
                } else {
                    cout << "Not enough " << breadType << " in inventory to remove " << quantity << " loaves." << endl;
                }
                return;
            }
        }
        cout << "No " << breadType << " found in inventory." << endl;
    }

    void listInventory() const {
        if (inventory.empty()) {
            cout << "The inventory is empty." << endl;
        } else {
            cout << "Current inventory:" << endl;
            for (const auto& bread : inventory) {
                bread.display();
            }
        }
    }

    void checkExpiration(const string& currentDate) const {
        bool expiredItems = false;
        for (const auto& bread : inventory) {
            if (bread.getExpirationDate() < currentDate) {
                if (!expiredItems) {
                    cout << "Expired items:" << endl;
                    expiredItems = true;
                }
                bread.display();
            }
        }
        if (!expiredItems) {
            cout << "No expired items." << endl;
        }
    }

    void expirationAlert(const string& currentDate, int daysBeforeAlert = 3) const {
        bool alert = false;
        for (const auto& bread : inventory) {
            if (daysUntilExpiration(bread.getExpirationDate(), currentDate) <= daysBeforeAlert) {
                if (!alert) {
                    cout << "Expiration Alert:" << endl;
                    alert = true;
                }
                bread.display();
            }
        }
        if (!alert) {
            cout << "No items nearing expiration." << endl;
        }
    }

private:
    vector<Bread> inventory;

    // Helper function to calculate the number of days until expiration
    int daysUntilExpiration(const string& expirationDate, const string& currentDate) const {
        int expYear, expMonth, expDay;
        int curYear, curMonth, curDay;

        sscanf(expirationDate.c_str(), "%d-%d-%d", &expYear, &expMonth, &expDay);
        sscanf(currentDate.c_str(), "%d-%d-%d", &curYear, &curMonth, &curDay);

        return (expYear - curYear) * 365 + (expMonth - curMonth) * 30 + (expDay - curDay);
    }
};

int main() {
    BreadInventory inventory;

    // Add bread to the inventory
    inventory.addBread(Bread("Whole Wheat", 10, "2024-09-10"));
    inventory.addBread(Bread("Sourdough", 5, "2024-09-05"));
    inventory.addBread(Bread("Rye", 8, "2024-09-08"));

    // List inventory
    inventory.listInventory();

    // Remove some bread from the inventory
    inventory.removeBread("Whole Wheat", 3);

    // List inventory after removal
    inventory.listInventory();

    // Check for expired items
    inventory.checkExpiration("2024-09-06");

    // Check for items nearing expiration
    inventory.expirationAlert("2024-09-06", 3);

    return 0;
}
