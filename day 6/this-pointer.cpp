#include<iostream>
using namespace std;
class Student
{
    string name;
public:
    void setName(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1;
    s1.setName("Safal");
    s1.display();
    return 0;
}