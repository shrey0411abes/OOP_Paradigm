#include <bits/stdc++.h>
using namespace std;

class student
{
    public:

    string name;

    void display()
    {
        cout<<"Student Name: "<<name<<endl;
    }

};

int main()
{
    student s1;
    s1.name = "Shrey";
    s1.display();

    return 0;
}