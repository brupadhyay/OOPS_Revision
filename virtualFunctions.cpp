#include<iostream>
using namespace std;

class Base{
    public:
    // * Method(function) overriding
    virtual void print(){
        cout << "base class called";
    }
};

class Derived : public Base{
    public:
    
    void print(){
        cout << "derived class called";
    }
};

int main()
{
    Derived d1;
    Base *b = &d1;
    // * without virtual keyword
    // * we created a pointer of BASE type to point to the
    // * object of an derived class, due to early binding 
    // * base class function is invoked
    b -> print(); 

    // * for overriding we use virtual function in base class
    // * dynamic binding (late binding)

    return 0;
}