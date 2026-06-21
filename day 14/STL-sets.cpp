#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int, greater<int>> s; 

    s.insert(10);
    s.insert(5);
    s.insert(30);
    s.insert(7);
    s.insert(1);
    s.insert(9);
    s.insert(10);

    cout << "Set Elements:\n";
    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << "\n\nFirst Element = " << *s.begin() << endl;

    cout << "Count of 10 = " << s.count(10) << endl;

    auto it = s.find(7);
    if (it != s.end())
    {
        cout << "7 Found" << endl;
    }
    else
    {
        cout << "7 Not Found" << endl;
    }

    s.erase(9);

    s.erase(s.begin());

    cout << "\nAfter Erase:\n";
    for (auto x : s)
    {
        cout << x << " ";
    }

    cout << "\n\nSize = " << s.size() << endl;

    cout << "Empty = " << s.empty() << endl;

    return 0;
}