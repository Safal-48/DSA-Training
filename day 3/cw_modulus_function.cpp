#include<iostream>
using namespace std;

int modulus(int a, int b)
{
    return a % b;
}

int main()
{
    cout << ::modulus(10, 5) << endl;

    return 0;
}