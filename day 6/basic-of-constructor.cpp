#include<iostream>
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
};
int main()
{
    Student s1;
    s1.name = "Safal";
    s1.age = 20;
    cout << s1.name << endl;
    cout << s1.age << endl;
    return 0;
}