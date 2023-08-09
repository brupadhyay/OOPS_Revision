#include<iostream>
using namespace std;

class Base{
    
    public:
    Base(){
        cout << "inside constructor\n";
    }
    ~Base(){
        cout << "inside destructor\n";
    }
    static int i;
    static void print(){        
        cout << i << " ";
        i++;
    }
};

int Base::i = 10;

int main()
{
    for(int i = 0;i<5;i++){
        // * can be called without or with object
        Base::print(); // bcz it's static
        // obj.print()
    }
    Base obj1;
    // cout << Base::i << endl;
    if(Base::i == 10){
        static Base obj;
    }

    cout << "End of program\n";

    return 0;
}