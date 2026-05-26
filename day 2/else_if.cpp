#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter a number: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}