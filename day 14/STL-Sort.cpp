#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {100, 10, 70, 15, 8, 200};

    sort(v.begin(), v.end());

    cout << "Vector in Ascending Order:\n";
    for (auto it : v)
    {
        cout << it << " ";
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << "\n\nVector in Descending Order:\n";
    for (auto it : v)
    {
        cout << it << " ";
    }

    int arr[6] = {100, 10, 70, 15, 8, 200};

    sort(arr, arr + 6);

    cout << "\n\nArray in Ascending Order:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    sort(arr, arr + 6, greater<int>());

    cout << "\n\nArray in Descending Order:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}