#include<iostream>
using namespace std;

/**
 * * if we want that our method or class should not be 
 * * further inherited then we use final
*/

class base final{
    public:
    // * FINAL VIRTUAL FUNCTION
    virtual void print() final{
        cout << "base";
    }
};

class derived: public base{
    public:
    derived(){
        cout << "default constructor called\n";
    }

    void print(){
        cout << "derived";
    }
};

int main()
{
    // derived d;
    // d.print();

    base *b = new derived();
    b -> print();
    return 0;
}