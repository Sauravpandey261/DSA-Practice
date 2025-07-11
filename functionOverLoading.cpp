#include <iostream>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "Int X: " << x << endl;
    }
    void show(string x)
    {
        cout << "String X: " << x << endl;
    }
};
int main()
{
    Print obj1;
    obj1.show(25);
    obj1.show("Saurav");

    return 0;
}