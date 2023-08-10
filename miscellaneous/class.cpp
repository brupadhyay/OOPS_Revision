#include<iostream>
using namespace std;

/**
 * Inheriting base class constructor in derived class
 * Yes it's possible
*/

class Base{
    public:
    Base(){
        cout << "hello base\n";
    }
};

class Derived: public Base{
    using Base::Base;
    public: 
    Derived(){
        cout << "hello derived\n";
    }
    
};

int main()
{
    Derived obj;
    return 0;
}