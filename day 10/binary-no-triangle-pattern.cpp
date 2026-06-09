#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        int num = i % 2;  
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num; 
        }

        cout << endl;
    }

    return 0;
}