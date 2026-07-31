//develop a program to demonstrate parameter passing techniques(call by value , address , refernce ) and analyze its effect on variable modification.
#include <bits/stdc++.h>
using namespace std;

// Call by Value
void callByValue(int x) //a copy of original variable (a) is created (x) and passed to the function.
// Any changes made to (x) inside the function will not affect the original variable (a).
//After the execution of function , (x) is destroyed and (a) remain unchanged.

{
    x = x + 10;         //here, only (x) is modified not (a).
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Address
void callByAddress(int *x) //here, x is pointer which stores the address of a variable (a).
                           //x stores the address of a, and *x accesses (or refers to) the value stored at that address.
                          // *x is not another variable that stores the value. It is an expression that lets you read or modify the value at the memory location pointed to by x.
{
    *x = *x + 10; //Any changes made to formal parameter (*x) will effect the value of actual parameter (a) because the function directly modified the value at the memory location.
    cout << "Inside Call by Address: " << *x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

int main()
{
    int a = 20; //initial value of (a).

    cout << "Initial value of a = " << a << endl;

    // Call by Value
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    // Call by Address
    callByAddress(&a); //here, &a is the address of (a) , meaning pass the address of (a).
    cout << "After Call by Address: " << a << endl;

    // Call by Reference
    callByReference(a);
    cout << "After Call by Reference: " << a << endl;

    return 0;
}