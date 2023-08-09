#include<iostream>
using namespace std;

/**
 * * a class is abstract if it has 
 * * atleast one pure virtual function
*/

class Test{
    public:
    // pure virtual function
    virtual void show() = 0;
};


// * abstract class using struct
// struct shapeClass
// {
//     virtual void Draw()=0;
// }

class Derived: public Test{
    public:
    void show() { cout << "derived!" ; }
};

int main()
{
    Test *t = new Derived();
    t -> show();
    return 0;
}