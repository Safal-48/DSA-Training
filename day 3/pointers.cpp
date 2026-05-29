#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int *ptrA = &a; 
    int *ptrB = &b; 

    cout << "Value of a: " << *ptrA << endl; 
    cout << "Value of b: " << *ptrB << endl; 

    return 0;
}