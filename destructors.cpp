#include <iostream>
using namespace std;

int creation = 0;
int deletion = 0;

/**
 * ? How desc. is diff. from member functions
 * * name same as class or structure name preceded by ~
 * * don't take any argument and don't return any value
 * * can't be overloaded
 */

/*class Base
{
public:
    Base()
    {
        creation++;
        cout << "constructor called " << creation << endl;
    }

    ~Base(); // declaration
};

// destructor outside class
Base::~Base(){
    deletion++;
    cout << "destructor called " << deletion << endl;
}*/

/*
class Base
{

    ~Base()
    {
        cout << "destructor called " << endl;
    }

public:
    Base()
    {
        cout << "constructor called " << endl;
    }

    friend void callDestructor();
};

void callDestructor()
{
    Base b1;
}

class Test{
    ~Test(){};

    public:
    friend void deleteObj(Test* ptr);
};

void deleteObj(Test *ptr){
    delete ptr;
}

int main()
{
    // callDestructor();
    Test *t = new Test;
    deleteObj(t);
    return 0;
}*/


/**
 * * Order of constructor is Parent1 -> Parent2 -> Child
 * * Order of destructor is Child -> Parent2 -> Parent1
 * * class derived: public parent1, public parent2{
 * * }
*/

class base {
  public:
    base()    
    { cout << "Constructing base\n"; }
    virtual ~base()
    { cout<< "Destructing base\n"; }    
};
 
class derived: public base {
  public:
    derived()    
     { cout << "Constructing derived\n"; }
    ~derived()
       { cout << "Destructing derived\n"; }
};

int main(){
    derived *d = new derived();
    // using pointer of base class type we delete derived object
    base *b = d;
    delete b;

    return 0;
}