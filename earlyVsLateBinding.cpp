#include<iostream>
using namespace std;

class Base{
    public: 
    virtual void earlybinding(){
        cout << "earlybinding\n";
    }
};

class Derived: public Base{
    public:
    void earlybinding(){
        cout << "latebinding\n";
    }
};

int main()
{
    Base *obj = new Derived();
    // * considers type of object - static
    // * because of virtual keyword it's
    // * doing dynamic binding (content of pointer)
    obj -> earlybinding();
    return 0;
}