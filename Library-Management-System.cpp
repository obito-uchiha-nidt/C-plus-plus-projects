#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isIssued = false;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books available.\n";
            return;
        }
        for (auto &b : books) {
            cout << "ID: " << b.id
                 << ", Title: " << b.title
                 << ", Author: " << b.author
                 << ", Status: " << (b.isIssued ? "Issued" : "Available")
                 << endl;
        }
    }

    void searchBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                cout << "Book Found:\n";
                cout << "Title: " << b.title << ", Author: " << b.author << endl;
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void issueBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                if (!b.isIssued) {
                    b.isIssued = true;
                    cout << "Book issued successfully!\n";
                } else {
                    cout << "Book already issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                if (b.isIssued) {
                    b.isIssued = false;
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            lib.addBook(id, title, author);
            break;

        case 2:
            lib.displayBooks();
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.searchBook(id);
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.issueBook(id);
            break;

        case 5:
            cout << "Enter Book ID: ";
            cin >> id;
            lib.returnBook(id);
            break;

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}