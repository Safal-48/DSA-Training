#include <iostream>
using namespace std;
void printOddNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printOddNumbers(n - 1);
    if (n % 2 != 0)
    {
        cout << n << " ";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Odd numbers from 1 to " << n << " are: ";
    printOddNumbers(n);
    return 0;
}