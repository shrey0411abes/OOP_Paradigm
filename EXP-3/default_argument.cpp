#include <iostream>
using namespace std;

//default arguments

int add(int a , int b=2)
{
    return a+b;
}
int main()
{
    cout<<add(10)<<endl;

    return 0;
}