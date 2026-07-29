// Shrey Kumar Gupta (2503201001115)

//Student details using class.

#include <bits/stdc++.h>
using namespace std;

class student //name of class
{
    private:    //access specifier (modifier)

    //data Members (attributes)
    int rollno;
    string name;
    float marks;
    string course;
    string elective;

public: //acess specifier (modifier)

    void input() //function to take input (data) from user
    {
        cout << "Enter roll number: ";
        cin >> rollno;

        cin.ignore();   // Ignore newline left by cin (ignore newline character)

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
        
        cin.ignore();

        cout<<"Enter course name: ";
        getline(cin , course) ;

        cout<<"Enter elective subject: ";
        getline(cin , elective) ;
    }

    void display() //function to print the details of the students
    {
        
        cout << "Roll Number : " << rollno << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
        cout<<"Course        : " <<course <<endl;
        cout<<"Elecive Subject : " <<elective<<endl;
    }
};

int main() //execution of program (logic) starts here
{
    student s1;
    //student s2;
    //student s3;
    //student s4;
    //student s5; //here, s1 is the object

    s1.input();      //function call
    s1.display();    //function call
    // s2.input();
    // s2.display();
    // s3.input();
    // s3.display();
    // s4.input();
    // s4.display();
    // s5.input();
    // s5.display();


    return 0;
}