#include<iostream>
using namespace std;        
class student
{
    public:
    string name= "Safal";
    string email= "saf@example.com";
    int age= 20;  
    void getdata()
    {
        cout<<"Enter name: "<<endl;
        cout<<"Enter email: "<<endl; 
        cout<<"Enter age: "<<endl;

        
    }
    void setdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl; 
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.setdata();
    return 0;
}