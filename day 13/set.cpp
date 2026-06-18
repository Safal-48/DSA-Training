#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    
    s.insert(10);
    s.insert(60);
    s.insert(30);
    s.emplace(40);   
    s.insert(10);   

    cout << "Size: " << s.size() << endl;

    cout << "Set elements: ";
    for (int it : s)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}