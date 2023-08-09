#include<iostream>
using namespace std;

class base{
    public:
    int x;

    base(){
        x = 10;
    }

    void setx(int x){
        this -> x = x;
    }

    void print(){
        cout << "x = " << this -> x << endl;
    }
};


class derived : public base{
    public:
    void derivedFunc(){
        // * emulate super keyword
        base::print();
        cout << "\nin derived\n";
    }
};

int main()
{
    base obj1, obj2;
    obj1.setx(20);
    obj2.setx(25);
    obj1.print();
    obj2.print();
    derived d;
    d.derivedFunc();
    return 0;
}