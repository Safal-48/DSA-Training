#include <iostream>
using namespace std;
 
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int reversedArr[5];

    for (int i = 0; i < 5; i++)
    {
        reversedArr[i] = arr[4 - i];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    return 0;
}