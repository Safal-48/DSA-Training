#include <iostream>
using namespace std;
void printEvenNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printEvenNumbers(n - 1);
    if (n % 2 == 0)
    {
        cout << n << " ";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Even numbers from 1 to " << n << " are: ";
    printEvenNumbers(n);
    return 0;
}   
