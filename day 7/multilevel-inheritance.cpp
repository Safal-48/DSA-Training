#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;

    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getRollNo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

class Result : public Student
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r1;

    r1.getName();
    r1.getRollNo();
    r1.getMarks();

    r1.display();

    return 0;
}