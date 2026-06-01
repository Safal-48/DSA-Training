#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 9, 2, 7, 1};
    int largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element in the array: " << largest << endl;
    return 0;
}
