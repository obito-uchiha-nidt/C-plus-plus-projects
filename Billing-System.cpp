#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    float price;

    Item(string n, int q, float p) {
        name = n;
        quantity = q;
        price = p;
    }

    float total() {
        return quantity * price;
    }
};

int main() {
    vector<Item> items;
    int choice;

    do {
        cout << "\n===== Billing System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Show Bill\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int qty;
            float price;

            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter quantity: ";
            cin >> qty;

            cout << "Enter price: ";
            cin >> price;

            items.push_back(Item(name, qty, price));
            cout << "Item added!\n";
        }

        else if (choice == 2) {
            float grandTotal = 0;

            cout << "\n===== BILL =====\n";
            for (auto &i : items) {
                cout << "Item: " << i.name
                     << " | Qty: " << i.quantity
                     << " | Price: " << i.price
                     << " | Total: " << i.total() << endl;

                grandTotal += i.total();
            }

            float discount = 0;
            if (grandTotal > 1000) {
                discount = grandTotal * 0.1; // 10% discount
            }

            cout << "------------------------\n";
            cout << "Subtotal: " << grandTotal << endl;
            cout << "Discount: " << discount << endl;
            cout << "Final Total: " << (grandTotal - discount) << endl;
        }

    } while (choice != 3);

    return 0;
}