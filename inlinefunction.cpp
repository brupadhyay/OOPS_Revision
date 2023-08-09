#include <iostream>
using namespace std;

// inline function 
/**
 * * by default a function within class definition is an inline function
 * ? Advantages -
 * improves efficiency
 * but we should keep it intact and small
 * ! for large size function we use member function 
 * ! defined outside the class using :: (scope-resolution operator)
*/

// * For an inline function, declaration and definition must be done together.


class Auto
{
    public:
    // by default private
    int price;
    
    public:
    // getter function for variable price
    int getPrice()
    {
        return price;
    }
    // setter function for variable price
    void setPrice(int x)
    {
        price = x;
    }

    static void f(){
        cout << "static func called";
    }

    // member functions declarations ( not inline )
    void print(int price);
};


// outside class - :: operator
// definition outside
void Auto::print(int data){
    setPrice(data);
    cout << getPrice() << endl;
}

int main(){
    // Auto::f(); // static func called directly
    Auto a;
    a.print(45);
}
