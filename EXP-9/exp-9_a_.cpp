//Pointer to an Object.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
    private :
    string name;
    double price ;
    int qty ;

    public:
    Product(string n = "N/A" , double p = 0 , int q = 0) : name(n) , price(p) , qty(q) {}
    void setQty(int q) 
    {
        qty = q;
    }

    double value() const 
    {
        return price * qty;
    }

    void display() const
    {
        cout<<" "<<left<<setw(12)<<name<<right<<setw(10)
        <<fixed<<setprecision(2)<<price<<setw(5)<<qty
        <<setw(12)<<value()<<'\n';
        
    }
};

int main()
{
    cout<<"POINTER TO AN OBJECT\n\n";
    Product p("Keyboard" , 1250.00 , 3) ;
    Product * ptr = &p;

    cout<<"* Using the arrow operator ptr->display() :\n";
    ptr->display();

    cout<<"\n Using the dereference form (*ptr).display() :\n";
    (*ptr).display();

    cout<<"\n Both forms are equivalent. ptr->m is shorthand for (*ptr).m\n";
    cout<<" The paraenthesis in the second form are compulsory, because\n";
    cout<<" the dot operator binds more tightly than the asterisk.\n\n";

    cout<<" Modifying the object through the pointer:\n";
    ptr->setQty(10);
    cout<<" after ptr->setQty(10) the ORIGINAL object p is:\n";
    p.display();

    return 0;
}