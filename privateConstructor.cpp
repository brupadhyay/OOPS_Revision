#include<iostream>
using namespace std;

/*Using Friend Class : If we want that 
class should not be instantiated by anyone 
else but only by a friend class.*/

class A{
    int x;
    A(){
        cout << "constructor of a \n";
    }

    public:
    friend class B;
    friend void friendFunction();
};

class B{
    public:
    B(){
        A a;
        cout << "constructor of b\n";
    }
};

void friendFunction(){
    A a;
    cout << "another way";
}

int main()
{
    B b;
    friendFunction();

    return 0;
}