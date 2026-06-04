#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getStudentData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();        
    s1.getStudentData();
    s1.display();

    return 0;
}