#include<iostream>
using namespace std;

int main()
{
    int num, rev = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(num > 0)
    {
        int last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
    }

    if(temp == rev)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}