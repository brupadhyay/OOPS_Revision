#include <iostream>
#include <string>
using namespace std;

/**
 * * The name of the constructor is same as its class name.
 * * Constructors are mostly declared in the public section of the class 
 * * though it can be declared in the private section of the class.
 * * doesn't return so no return type
*/

class Student{
    private:
    int rollno;
    string name;
    int fees;

    public:
    // constructor.
    // Student(); // outside class use declaration
    Student(){
        // default constructor 
        rollno = -1;
        name = "xyz";
        fees = -1;
    }
    
    // * Parameterized Constructor
    //In C++, We can have more than one constructor in a class with same name, 
    // as long as each has a different list of arguments.
    Student(int roll, string name, int fees){
        this -> rollno = roll;
        this -> name = name;
        this -> fees = fees;
    }

    Student(int roll, string name){
        this -> rollno = roll;
        this -> name = name;
        fees = 0;
    }

    void printDetails(){
        cout << "roll no of student " << rollno;
        cout << "\nname of student " << name; 
        cout << "\nfees " << fees;
        cout << "\n";
    }
};

// constructor outside class
// Student::Student(){
//     cout << "enter roll no of student ";
//     cin >> rollno;
//     cout << "name of student ";
//     cin >> name;
//     cout << "enter fees ";
//     cin >> fees;
// }

// * Copy Constructor
// Syntax - class_name(const class_name &obj)
class Order{
    public:
    int id;
    string name;

    public:
    Order(){};

    // user-defined copy constructor
    Order(const Order &obj1){
        cout << "copy constructor called!!\n";
        id = obj1.id;
        name = obj1.name;
    }

    void set(int x, string s){
        this -> id = x;
        this -> name = s;
    }

    void display(){
        cout << "id is "<< id << endl;
        cout << "name is "<< name << endl;
    }

};


int main(){
    Student sp;
    Student s(23, "bhavesh");
    Student p(54, "sarvesh", 500);

    // cout << "Printing student details \n";
    // sp.printDetails();
    // s.printDetails();    
    // p.printDetails();

    Order obj1, obj3;
    obj1.set(20, "bru");
    // Implicit Copy Constructor Calling
    Order obj2 = obj1; // OR Order obj2(obj1);
    // obj1.display();
    // obj2.display();

    // cout << "\ndefault copy constructor called \n";
    obj1.set(30, "coder");
    // obj1.display();
    // obj2.display();


    // assigment operator
    // already initialized then copy
    // copy constructor is not called for this case
    // * makes shallow copy
    obj3 = obj1; 
    obj1.id = 60;

    Order obj4 = obj1;

    return 0;
}