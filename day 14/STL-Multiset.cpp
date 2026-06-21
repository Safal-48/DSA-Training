#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(7);
    ms.insert(1);
    ms.insert(9);
    ms.insert(10);

    cout << "Multiset Elements:\n";
    for (auto it : ms)
    {
        cout << it << " ";
    }

    cout << "\n\nCount of 30 = " << ms.count(30) << endl;

    auto it = ms.find(30);
    if (it != ms.end())
    {
        cout << "30 Found" << endl;
    }

    ms.erase(it);

    cout << "\nAfter Erasing One 30:\n";
    for (auto x : ms)
    {
        cout << x << " ";
    }

    cout << "\n\nCount of 30 = " << ms.count(30) << endl;

    cout << "Size = " << ms.size() << endl;
  
    cout << "Empty = " << ms.empty() << endl;
    
    return 0;
}