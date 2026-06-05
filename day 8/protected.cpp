#include<iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
};

class Result : public Student
{
public:
    void display()
    {
        cout << "Roll Number = " << rollNo << endl;
    }
};

int main()
{
    Result r1;
    r1.setRollNo(101);
    r1.display();
    return 0;
}