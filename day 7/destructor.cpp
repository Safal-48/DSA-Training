#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    
    Student()
    {
        cout << "Constructor created..." << endl;
    }
    ~Student()
    {
        cout << "Destructor called..." << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Safal";
    s1.age = 20;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}