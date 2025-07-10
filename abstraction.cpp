#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Draw Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Draw Square" << endl;
    }
};
int main()
{
    Circle cir1;
    cir1.draw();
    Square sq1;
    sq1.draw();
    return 0;
}