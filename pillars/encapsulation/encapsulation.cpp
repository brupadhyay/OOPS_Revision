#include<iostream>
using namespace std;

// encapsulation vs data-hiding (using access specifiers)
// * Example - capsule
class Area{
    private:
    int length;
    int breadth;

    public:
    Area(int l, int b){
        this -> length = l;
        this -> breadth = b;
    }

    int getArea(){
        return length*breadth;
    }
};

int main()
{
    Area a(20, 4);
    cout << a.getArea() << endl;
    
    return 0;
}