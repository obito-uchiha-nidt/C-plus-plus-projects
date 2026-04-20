#include<iostream>
using namespace std;

void apk()
{
    int a;
    cout << "\n\n\tChoose any one of them" << endl;
    cout << "-------------------------------------------\n" << endl;
    cout << "  1. Find Greatest" << endl;
    cout << "  2. Factorial" << endl;
    cout << "  3. Calculator" << endl;
    cout << "  4. Table" << endl;
    cout << "  5. Triangle of Numbers" << endl;
    cout << "___________________________________________" << endl;
    cout << "------------->  ";
    cin >> a;
    cout << "-------------------------------------------" << endl;

    // when input not matched then it runs.
    if(a>5)
    {
        cout << "\tKya Gunda Bnega re too" << endl;
        cout << "-------------------------------------------" << endl;
    }

    // it executes Triangle of Numbers
    if(a==5)
    {
        int t;
        cout << "Enter Your Desire Number" << endl;
        cout << "------------->  ";
        cin >> t;
        cout << "___________________________________________\n\n" << endl;

        for(int i=1; i<=t; i++)
        {
            cout << "\t\t";
            for(int j=1; j<=i; j++)
            {
                cout << j<<" ";
            }
            cout << "" << endl;
        }
    }

// It works for Finding Greatest number out of three numbers.
    if(a==1)
    {
        int a,b,c;
        cout << "Enter Your Desire Number" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "-------------> A =  ";
        cin >> a;
        cout << "-------------> B =  ";
        cin >> b;
        cout << "-------------> C =  ";
        cin >> c;
        if(a>b && a>c)
        {
            cout << "-------------------------------------------" << endl;
            cout << "-------------> "<< "A is Greatest" << endl;
            cout << "-------------------------------------------" << endl;
        } else if(b>a && b>c) {
            cout << "-------------------------------------------" << endl;
            cout << "-------------> "<< "B is Greatest" << endl;
            cout << "-------------------------------------------" << endl;
        } else {
            cout << "-------------------------------------------" << endl;
            cout << "-------------> "<< "C is Greatest" << endl;
            cout << "-------------------------------------------" << endl;
        }
    }

    //it works for Finding the factorial number.
    if(a==2)
    {
        int num,fact=1;
        cout << "Enter Your Desire Number" << endl;
        cout << "------------->  ";
        cin >> num;
        cout << "___________________________________________" << endl;
        for(int i=1; i<=num; i++)
        {
            fact=fact*i;
        }
        cout << "Factorial of "<<num<<" = "<<fact << endl;
        cout << "-------------------------------------------" << endl;
    }

    //it calculates the digits
    if(a==3)
    {
        float fst,sec,ans;
        char op;
        cout << "Enter Your Desire Number" << endl;
        cout << "------------->  ";
        cin >> fst>>op>>sec;
        if(op=='+')
        {
            ans=fst+sec;
            cout << "-------------------------------------------" << endl;
            cout << "-Answer--is-->  "<<ans<<endl;
            cout << "-------------------------------------------" << endl;
        }
        if(op=='-')
        {
            ans=fst-sec;
            cout << "-------------------------------------------" << endl;
            cout << "-Answer--is-->  "<<ans<<endl;
            cout << "-------------------------------------------" << endl;
        }
        if(op=='*')
        {
            ans=fst*sec;
            cout << "-------------------------------------------" << endl;
            cout << "-Answer--is-->  "<<ans<<endl;
            cout << "-------------------------------------------" << endl;
        }
        if(op=='/')
        {
            ans=fst/sec;
            cout << "-------------------------------------------" << endl;
            cout << "-Answer--is-->  "<<ans<<endl;
            cout << "-------------------------------------------" << endl;
        }
    }

    // it prints table of any numbers.
    if(a==4)
    {
        int num,table;
        cout << "Enter Your Desire Number" << endl;
        cout << "------------->  ";
        cin >> num;
        cout << "\n\n";
        cout << "------------------------------------------------" << endl;
        for(int i=1; i<=10; i++)
        {
            table=num*i;
            cout << table << " | ";
        }
        cout << "\n------------------------------------------------" << endl;
    }
}

int main()
{
    string cnf,nme,dep;
    int roll;

    cout << "Are you a student? ";
    cin >> cnf;

    if(cnf == "yes")
    {
        cout << "Enter Your Name: ";
        cin >> nme;
        
        cout << "Enter Your Roll-No: ";
        cin >> roll;
        
        cout << "Enter Your Department: ";
        cin >> dep;
    }
    while(true)
        {
            apk();
        }
    return 0;
}