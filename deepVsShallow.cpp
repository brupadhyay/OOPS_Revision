#include <iostream>
#include <vector>
using namespace std;

class Car
{
public:
    string name;
    vector<string> car_colors;

    Car(string name, vector<string> colors)
    {
        this->name = name;
        this->car_colors = colors;
    }
};

int main()
{
    vector<string> colors = {"Red", "Blue"};
    Car car1("Honda", colors);
    Car car2(car1);

    cout << "deep copy \n";
    car1.car_colors.push_back("Black");
    for (auto it : car1.car_colors)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : car2.car_colors)
    {
        cout << it << " ";
    }

    Car *car3 = &car1;
    cout << "\nshallow copy \n";
    car1.car_colors.push_back("White");
    for (auto it : car1.car_colors)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : car3 -> car_colors)
    {
        cout << it << " ";
    }

    return 0;
}