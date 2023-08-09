#include<iostream>
using namespace std;

/**
 * In C++, there is no overloading across scopes 
 * and derived class scopes are not an exception to this 
 * general rule.
*/

class Base
{
public:
    int f(int i){
        cout << "f(int): ";
        return i+2;
    }
    
};

class Derived : public Base
{
public:
    double f(double i){
        cout << "f(double): ";
        return i+2.2;
    }
};

int main(){
    Derived *dp = new Derived();
    cout << dp -> f(1) << endl;
    cout << dp -> f(1.1) << endl;
}