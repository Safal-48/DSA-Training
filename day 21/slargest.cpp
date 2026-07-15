#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    
    vector<int> v = {15, 1, 40, 3, 9, 6};

    int largest = v[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > largest)
        {
            secondLargest = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] > secondLargest)
        {
            secondLargest = v[i];
        }
    }

    cout << "Largest Element: " << largest << endl;
    cout << "Second Largest Element: " << secondLargest << endl;

    return 0;
}