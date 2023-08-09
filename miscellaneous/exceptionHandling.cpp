#include<iostream>
using namespace std;


int main()
{
    int x = -1;

    try {
        cout << "tried\n";
        throw 'a';
    } catch (int x) {
        cout << "exception caught\n";
    } catch(...) {
        // * special catch block called as catch all
        cout << "default exception\n";
    }

    return 0;
}