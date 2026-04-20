#include <iostream>
#include <string>
using namespace std;


class Student
{
    public:
    int roll;
    string name;
    string dep;
   public: 
    void getdata()
    {
        cout << "Enter Your Roll-No: ";
        cin >> roll;
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Department: ";
        cin >> dep;
    }
    void showDetails()
    {
        cout << "Roll-No: "<<roll << endl;
        cout << "Name: "<<name << endl;
        cout << "Department: "<<dep << endl;
    }
    
};

int main()
{
   Student s[100];
   int nstdnt=0;
   int choice;
   
   while(true)
   {
       cout << "\n1 add Student";
       cout << "\n2 Show all Students";
       cout << "\n3 search Students";
       cout << "\n4 Exit";
       cout << "\n\nChoose any of them: ";
       cin >> choice;
       
       if(choice==1)
       {
           s[nstdnt].getdata();
           nstdnt++;
       }
       
       else if(choice==2)
       {
           cout << "Students Records" << endl;
           for(int i=0; i<nstdnt; i++)
           {
               s[i].showDetails();
           }
       }
       
       else if(choice==3)
       {
           int srch_roll;
           cout << "Enter Roll-No of a Students to Find Details: ";
           cin >> srch_roll;
           for(int i=0; i<nstdnt; i++)
           {
               if(s[i].roll==srch_roll)
               {
                   s[i].showDetails();
               }
           }
       }
       
       else if(choice==4)
       {
           break;
       }
   }
}