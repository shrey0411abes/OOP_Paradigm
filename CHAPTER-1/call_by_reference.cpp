//call by reference
#include <bits/stdc++.h>
using namespace std;

int sum(int *, int *); // Function declaration / prototype

int main()  
{
    int a, b, r;  
    
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    r = sum(&a, &b); // Passes the memory addresses of a and b
    cout << r;
    
    return 0;
}

int sum(int *x, int *y) // Function definition using pointer parameters
{
    int s;
    s = *x + *y; // Dereferences the pointers to add the actual values
    return (s);
}                 