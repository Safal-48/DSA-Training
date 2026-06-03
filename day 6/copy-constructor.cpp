#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "Default Constructor created..." << endl;
    }

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor created..." << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};