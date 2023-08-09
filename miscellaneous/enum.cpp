#include<iostream>
using namespace std;

// * user-defined data types

/**
 * 1. two can have same value
 * 2. not assigned default from zero
 * 3. if one is assigned random then the left ones
 * get values + 1 of prevones
*/

enum week {mon, tue, wed, thurs = 11, fri, sat, sun};

int main()
{
    enum week day;
    day = wed;
    cout << day << "\n";

    cout << wed << endl;
    cout << fri << endl;
    return 0;
}