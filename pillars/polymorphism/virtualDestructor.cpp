#include<iostream>
using namespace std;

class a{
    public: 
    int x;
    a(){
        x = 10;
    }

    void f1(){
        cout << "a\n";
    }

    virtual ~a(){
        cout << "destructor of a";
    }
};

class b: public a{
    public: 
    int y;
    b(){
        y = 10;
    }

    void f2(){
        cout << "b";
    }
    // if base class destructor becomes virtual then 
    // * derived also become virtual
    ~b(){
        cout << "destructor of b\n";
    }
};

int fun(){
    a *ptr = new b();
    delete ptr;
    // * due to virtual keyword late binding occurs
    // * and first derived class destructor is invoked
    // * then base bcz now, content of pointer matters
    // * in this way we delete DMA pointers/variables(new, delete)
}

int main()
{
    a *ptr = new b();
    ptr -> f1(); // * early binding
    // ptr -> f2();  error
    /**
     * * In early binding object ka type matters not content
     * * in late binding, content matter
    */

   fun();

    return 0;
}