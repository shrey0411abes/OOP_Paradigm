#include <bits/stdc++.h>
using namespace std;

class Student
{
    private:

    string name; //global variables (class variables)
    int age;
  
    public:
    void setData(string n , int a) //local variables
    {
        name = n; 
        age = a; 
    }
                     
    void display()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
                      
int main()
{
    Student s1;
    s1.setData("Shrey" , 19);
    s1.display();

    return 0;
   
}


