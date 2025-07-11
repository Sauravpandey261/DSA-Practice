#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor A" << endl;
    }
    ~A()
    {
        cout << "Destructor A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Constructor B" << endl;
    }
    ~B()
    {
        cout << "Destructor B" << endl;
    }
};

int main()
{
    B b1;     // Constructor Seq  Parent then child
    return 0; // Destructor Seq Child then Parent
}