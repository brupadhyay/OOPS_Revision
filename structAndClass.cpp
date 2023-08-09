#include <iostream>
using namespace std;

/**
 * Members of a class are private by default and 
 * members of a structure are public by default. 
*/

class Item1{
private: // here we can write access specifiers
    // int product1; // not accessible
public: 
    // int product1;
protected:
    // int product1;
};

struct Item2{
    int product1; // accessible
};


/**
 * Both class and struct provide inheritance here,
 * because of the public access
*/

class Product{
    public:
    string orderID;
};
// single-level-inheritance
class ProductDescription : public Product {
    public:
    int price;
};


int main(){
    // Item first;
    // first.product1 = 20;

    // cout << first.product1 << endl;
    // int x = 20;
    // int *y = &x;
    // cout << y << " " << x << endl;
    ProductDescription shoes;
    shoes.orderID = "#291";
    shoes.price = 400;

    cout << shoes.orderID << " " << shoes.price << endl;

    return 0;
}