#include<iostream>
using namespace std;

// * Diamond Problem
//     A
// B       C 
//     D

class A{
    int a;
    public:
    A(){
        a = 10;
    } 
    void show() { cout << "base class " << a; }

    public:
    virtual void print() {cout << "hello";}
};

class B: virtual public A{
    private:
    virtual void print() { cout <<"\nbye"; }
};

class C: virtual public A{

};

class D: public B, public C{

};


int main()
{
    D d;
    // d.show(); compiler gets confused and error
    // after virtual keyword before public inheritance
    // * now class B and C are virtual base class
    // d.show();

    A *obj = new B();
    obj -> show();
    obj -> print();

    return 0;
}