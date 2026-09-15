//Array of Object
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
    private:
    string name;
    double price;
    int qty;

    public:
    Product() : name("Empty") , price(0) , qty(0)
    {
        cout<<" default constructor called\n";
    }

    void setData(string n  , double p , int q)
    {
        name = n ; 
        price = p ; 
        qty = q;
    }

    double value() const 
    {
        return price * qty ;
    }

};

int main()
{
    cout<<"ARRAY OF OBJECTS" ;
}