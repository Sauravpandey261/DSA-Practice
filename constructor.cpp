#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car()
    {
        cout << "Non parameterized constructor called... \n";
    }
    Car(string name, string color)
    { // Isme 2 same naam ke constructor bne hai jise hm constuctor overloading kehte hai;
        this->name = name;
        this->color = color;
    }
    string getName()
    {

        return name;
    }
    string getColor()
    {
        return color;
    }
};

int main()
{
    Car c1("Maruti 800", "White");

    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;
    Car c2;

    return 0;
}