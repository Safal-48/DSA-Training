#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> v = {15, 1, 40, 2, 3, 6};

    int smallest = v[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = v[i];
        }
        else if (v[i] > smallest && v[i] < secondSmallest)
        {
            secondSmallest = v[i];
        }
    }
    
    cout << "Smallest Element: " << smallest << endl;
    cout << "Second Smallest Element: " << secondSmallest << endl;

    return 0;
}