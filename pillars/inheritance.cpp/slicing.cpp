#include<iostream>
using namespace std;

class base{
    int bar;
};

class derived: public base{
    int foo;
};

int main()
{
    // * slicing is when you assign object of derived class
    // * to an instance of base class
    derived d;
    // here the subclass member(Foo) will not be available to b
    base b = d; 
    return 0;
}