#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> uset;

    uset.insert(10);
    uset.insert(5);
    uset.insert(30);
    uset.insert(30); 
    uset.insert(1);
    uset.insert(9);
    uset.insert(10); 

    cout << "Unordered Set Elements:\n";
    for (auto it : uset)
    {
        cout << it << " ";
    }

    auto it = uset.find(10);
    if (it != uset.end())
    {
        cout << "\n\n10 Found" << endl;
    }
    else
    {
        cout << "\n\n10 Not Found" << endl;
    }

    cout << "Count of 10 = "
         << uset.count(10) << endl;


    uset.erase(10);

    cout << "\nAfter Erasing 10:\n";
    for (auto x : uset)
    {
        cout << x << " ";
    }

    cout << "\n\nSize = "
         << uset.size() << endl;

    cout << "Empty = "
         << uset.empty() << endl;

    return 0;
}