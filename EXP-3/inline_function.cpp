#include <iostream>
using namespace std;

//inline function : is function in which compiler replaces the function call with the actual function code during compilation.
//fast
//improves performance
//good for small functions
//large inline function increase executable size
//compiler may ignore inline request for 


inline int add(int a , int b)
{
    return a + b;
}

int main()
{
    cout << add(10 , 30) << endl;
    return 0;
}
