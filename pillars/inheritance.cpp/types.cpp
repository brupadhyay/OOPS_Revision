#include<iostream>
using namespace std;

// visibility modes define availability & accessibility
class a{
    int x;
    protected:
    int y;
    public: 
    int z;
    a(){
        x = 1;
        y = 2;
        z = 3;
    }

    static void display(){
        cout << "base class done "<< endl;
    }

    virtual void print(){
        cout << "parent" << endl;
    }

};


class b: public a{
    public:
    b(){
        cout << y << z << endl;
    }

    void print(){
        cout << "derived" << endl;
    }
};

int main(){
    b obj;
    /**
     * * private - none accessible
     * * protected - none accessible
     * * public - only public accessible
    */
    // cout << obj.x << endl;
    // cout << obj.y << endl;
    // cout << obj.z << endl;

    a::display();
    a *apple = new b();
    apple -> print();
}