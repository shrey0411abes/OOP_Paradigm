//default argument
#include <iostream>
using namespace std;

void display(string name , int age = 18) //default argument(age)
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}


int main()
{
    display("Amit" , 21);
    display("Ram");

    return 0;
}