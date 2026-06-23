#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[100] = {0};

    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int num;
    cout << "Enter number to find frequency: ";
    cin >> num;

    cout << "Frequency = " << hash[num];

    return 0;
}