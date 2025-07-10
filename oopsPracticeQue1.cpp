#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload minus operator (-)
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Display function
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3); // 5 + 3i
    Complex c2(2, 1); // 2 + 1i

    Complex c3 = c1 - c2; // Subtraction using overloaded '-'

    cout << "Result of subtraction: ";
    c3.display(); // Output: 3 + 2i

    return 0;
}
