#include <iostream>
//here, #include is a preprocessor directive that tells the compiler to include the contents of the iostream header file, which is part of the C++ standard library and provides functionalities for input and output operations.
// The iostream header file contains definitions for objects like cin, cout, cerr, and clog, which are used for standard input and output streams.
using namespace std;
int main()
{
    //g++ -o main.exe main.cpp(compile)
    //main.exe(run)
   cout<<"Hello"<<endl;

   int a = 5;
   float b = 5.6f ;
   float c = -5.6f ;

   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;

   return 0;
}