#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "Parent class show..\n";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class show..\n";
    }
};
int main()
{
    Parent *ptr;
    Child child1;
    ptr = &child1; // Run time binding
    ptr->show();   // Virtual Function
    return 0;
}