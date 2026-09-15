#include <iostream>
using namespace std;

class Time
{
    private:
    int hours , minutes;

    public:
    Time(int h = 0 , int m = 0 ) : hours(h+m/60) , minutes(m%60) {}

    void compareByValue(const Time &t )
    {

    int mine = hours*60 + minutes ;
    int his = t.hours*60 + t.minutes;
    cout<<" (by value)  this = "<<mine<<" min , other = "<<his<<" min , larger is = "<<(mine > his ? "this" : "other ")<<'\n';
   }

   void compareByReference(const Time &t) const 
   {
    int mine = hours*60+minutes;
    int his = t.hours*60+t.minutes;
    cout<<" (by reference) this = "<<mine<<" min , other = "<<his<<" min , larger is "<<(mine > his ? "this" : "other")<<'\n' ;
     
   }

   void display(const char*label) const 
   {
    cout<<" "<<label<<" : "<<hours<<" hr "<<minutes<<" min\n ";
   }

   friend  void showBoth(const Time &a , const Time &b)
   {
    cout<<" Sum of both = "<<(a.hours + b.hours )<<" hr "<<(a.minutes + b.minutes)<<" min\n ";
   }
};

int main()
{
    cout<<"PASSING OBJECTS AS ARGUMENTS\n\n";
    Time t1(2 , 45) , t2(3 , 40);
    t1.display("Time 1");
    t2.display("Time 2");

    cout<<"\n Passing t2 into a number function of t1:\n" ;
    t1.compareByValue(t2);
    t1.compareByReference(t2);

    cout<<"\n Passing both objects to a friend fucntion:\n";
    showBoth(t1 , t2);

    cout<<"\n A member function may read the private members of ANOTHER\n"
        <<" object of the same class , because access control applies\n"
        <<" per class and not per object.\n";

    return 0;
}