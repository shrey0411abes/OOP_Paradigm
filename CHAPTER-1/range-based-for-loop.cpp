//Range-Based for loop (for-each loop).
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10,20,30,40,50};

    for(int x : numbers)
    {
        cout<<" "<<x;
    }

    return 0;
} 