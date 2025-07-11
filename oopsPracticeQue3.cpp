#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class Student : public Person
{
    string studentId;

public:
    Student(string name, int age, string id) : Person(name, age)
    {
        studentId = id;
    }
    void displayStudentInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Student Id:" << studentId << endl;
    }
};

int main()
{
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();
    return 0;
}