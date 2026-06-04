#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Safal", 20);

    s1.display();

    return 0;
}