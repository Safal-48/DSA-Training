#include<iostream>
using namespace std;

void add(int &a, int &b)   
{
    a = a + b;
    cout << "Addition = " << a << endl;
}

int main()
{
    int x = 10, y = 3;

    add(x, y);

    cout << "Value of x after function call = " << x << endl;

    return 0;
}