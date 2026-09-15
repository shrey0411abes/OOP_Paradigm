//Static data members and Static member functions.
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string name;
    double basic;
    static int empCount;
    static double totalPayroll;

    public:
    Employee(string m , double b) : name(m) , basic(b)
    {
        empCount++ ;
        totalPayroll += b;
        cout<<" Created "<<name<<" , employee count is now "<<empCount<<'\n';
    }

    static int getCount()
    {
        return empCount;
    }
    static double getPayroll()
    {
        return totalPayroll ;
    }
};

int Employee::empCount = 0;
double Employee::totalPayroll = 0.0;

int main()
{
    cout<<"STATIC MEMBERS\n\n";
    cout<<"Before any object exists : Employee::getCount() = "
    <<Employee::getCount()<<"\n\n";

    Employee e1("Rohit" , 45000);
    Employee e2("Sneha" , 62000);
    Employee e3("Imran" , 38000);

    cout<<"\n Shared class-wide data:\n";
    cout<<" Total employees = "<<Employee::getCount()<<'\n';
    cout<<" Total payroll   = Rs."<<Employee::getPayroll()<<'\n';

    cout<<"\n The counter is not stored inside any object . It belongs to\n"
    <<"the class"<<endl;

    return 0;

}