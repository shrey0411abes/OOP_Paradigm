//Functions with variable number of arguments.
#include <iostream>
using namespace std;

template <typename...Args>
int sum(Args...args)
{
    return (args+...);
}

template<typename...Args>
int product(Args...args)
{
    return(args*...);
}

int main()
{
    cout<<"Sum = "<<sum(10,20)<<endl;
    cout<<"Sum = "<<sum(10,20,30)<<endl;
    cout<<"Sum = "<<sum(10,20,30,40)<<endl;
    cout<<"Product = "<<product(20,4)<<endl;

    return 0;
}
