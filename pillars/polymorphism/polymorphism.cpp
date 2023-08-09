#include <iostream>
using namespace std;

/**
 * *Polymorphism - many forms - man playing diff. behaviours
 * Types - 
 * 1. Compile time - Function Overloading and Operator Overloading
 * 2. Run time - Method overriding and virtual function
*/

class complex{
    double real;
    double imaginary;

    public:
    complex(double real = 0.0, double imaginary = 0.0){
        this -> real = real;
        this -> imaginary = imaginary;
    }

    complex operator + (complex const&obj){
        complex res;
        res.real = this -> real + obj.real;
        res.imaginary = this -> imaginary + obj.imaginary;
        return res;
    }

    void print(){
        cout << this->real << " + i" << this -> imaginary << endl;
    }

    
};

class base
{
public:
    virtual void func(int x){
        cout << x << " \n";
    }

    void show(){
        cout << "base class\n";
    }

    void func(double x){
        cout << x << "\n";
    }

    int func(int x, int y){
        cout << x << ", " << y << "\n";
        return 0;
    }
};

class derived : public base{
    public:
    void func(int x){
        cout << "derived class with "<< x << endl;
    }

    void show(){
        cout << "derived class\n";
    }
};

int main()
{
    base b;
    b.func(20);
    b.func(9.123);
    b.func(2,3);

    complex c1(10.0,4.0), c2(2, 5.0);
    complex c3 = c1 + c2;
    c3.print();

    base *c = new derived();
    // virtual function binded at run-time(late binding)
    c -> func(3);
    // non-virtual function binded at compile time
    c -> show();

    return 0;
}