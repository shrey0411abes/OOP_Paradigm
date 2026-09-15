#include <iostream>
using namespace std;

class Distance
{
  private :
  int feet , inches ;

  public:
  Distance(int f = 0 , int i = 0) : feet(f + i /12) , inches(i % 12) {}

  Distance add(const Distance &d) const 
  {
    return Distance(feet + d.feet , inches + d.inches) ;
  }

  Distance subtract(const Distance &d) const
  {
    int t1 = feet * 12 + inches;
    int t2 = d.feet * 12 + d.inches ;
    int diff = (t1>t2) ? t1 - t2 : t2 - t1 ;
    return Distance(0 , diff);
  }

  void show() const 
  {
    cout<<feet<<" '  "<<inches<<"\"" ;
  } 

  friend Distance scale(const Distance &d , int factor);

};

Distance scale(const Distance &d , int factor)
{
   return Distance(0 , (d.feet * 12 + d.inches) * factor);
}

int main()
{
    cout<<"RETURNING OBJECTS FROM FUNCTIONS\n\n";
    Distance d1(5 , 9) , d2(3 , 8);

    cout<<" d1 = ";
    d1.show();
    cout<<"\n d2 = " ;
    d2.show() ;
    cout<<"\n\n";

    Distance sum = d1.add(d2);
    cout<<" d1.add(d2) = " ;
    sum.show();
    cout<<'\n';

    Distance diff = d1.subtract(d2);
    cout<<" d1.subtract(d2) = ";
    diff.show();
    cout<<'\n';

    Distance big = scale(d1 , 3);
    cout<<" scale(d1 , 3) = ";
    big.show();
    cout<<"\n\n";

    cout<<" Chained : d1.add(d2).add(d2) = ";
    d1.add(d2).add(d2).show();
    cout<<"\n\n Modern compilers apply return value optimization , so the\n"
        <<" returned object is built directly in the caller's memory.\n";

    return 0;
}