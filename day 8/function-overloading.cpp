#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
        cout << "Default Constructor Called" << endl;
    }

    Student(string name, int age)
    {
        cout << "Parameterized Constructor Called" << endl;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Safal", 20);
    cout << "\nStudent Details:" << endl;
    s2.display();
    return 0;
}