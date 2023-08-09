#include <iostream>
using namespace std;

// direct member access operator (.)

// private
// only accessible by member functions or friend function


// public
// accessible by outside as well


// protected
// similar to private, but the subtle difference is
// that derived class can access protected data members of base class


class Product{
    protected:
    int product_id;

    public:
    void updateID(int id){
        this -> product_id = id;

        cout << product_id << endl;
    }
};

class Derived: public Product{
    public:
    void print(int id){
        /*Child class is able to access the inherited
        protected data members of base class*/
        product_id = id;

        cout << product_id << endl;
    }
};

/*
A friend class/function can access private and protected members of other classes in which it is declared as a friend
*/

class Base{
    // can be declared as private, protected or public
    friend class BaseFriend;
    // friend return-type func-name arguments
    friend void friendFunction(Base &obj);
    private:
    int private_var;

    protected:
    int protected_var;

    public:
    Base(){
        private_var = 20;
        protected_var = 30;
    }
};

class BaseFriend{
    public:

    void display(Base &obj){
        cout << "accessing private "<< obj.private_var << endl;
        cout << "accessing protected "<< obj.protected_var << endl;
    }
};

void friendFunction(Base &obj){
    cout << "accessing private "<< obj.private_var << endl;
    cout << "accessing protected "<< obj.protected_var << endl;
}



int main(){
    Product p;
    // not accessible
    // cout << p.product_id << endl; 

    // accessble indirectly through member function
    // p.updateID(20);

    Derived d;
    d.print(20);

    Base obj;
    BaseFriend f;
    f.display(obj);
    friendFunction(obj);

    return 0;
}