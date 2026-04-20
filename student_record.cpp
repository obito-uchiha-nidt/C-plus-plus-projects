#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;

    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void showData()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    Student s[50];
    int count = 0;
    int choice;

    while(true)
    {
        cout << "\n1. Add Student";
        cout << "\n2. Show Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            s[count].getData();
            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                s[i].showData();
            }
        }

        else if(choice == 3)
        {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;

            for(int i = 0; i < count; i++)
            {
                if(s[i].id == searchId)
                {
                    s[i].showData();
                }
            }
        }

        else if(choice == 4)
        {
            break;
        }
    }

    return 0;
}