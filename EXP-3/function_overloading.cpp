#include <iostream>
using namespace std;

class Sum
{
public:

    void add(int a, int b)
    {
        cout << "Sum of two integers = " << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << "Sum of three integers = " << a + b + c << endl;
    }

    void add(float a, float b)
    {
        cout << "Sum of two float numbers = " << a + b << endl;
    }
};

int main()
{
    Sum obj;

    obj.add(10, 20);
    obj.add(10, 20, 30);
    obj.add(10.5f, 20.7f);

    return 0;
}