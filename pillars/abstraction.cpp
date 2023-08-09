#include<iostream>
using namespace std;

/**
 * Abstraction means hiding implementation
 * and showing necessary details
 * * Example - a man driving a car
 * Two methods -
 * 1. using header files
 * using pow() from math.h header files, 
 * we don't know which algorithm is being used by function to
 * calculate the powers of numbers we simply pass the algorithm
 * 2. using access specifiers
 * helps in restricting access to implementation details
 * using private or protected specifiers helps us reducing access
*/

class Area{
    // private
    int side;

    public:
    Area(){
        cout << "constructor invoked\n";
    }

    void setSide(int x){
        side = x;
    }

    int getArea(){
        return side*side;
    }
};


int main()
{
    Area a;
    // a.side = 5; // error: inaccessible
    a.setSide(5); // correct setting private using function
    cout << a.getArea() << endl;

    return 0;
}