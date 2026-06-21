#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mpp;

    mpp.insert({101, "Safal"});
    mpp.insert({101, "Harshal"});
    mpp.insert({102, "Shwetank"});
    mpp.insert({102, "Shravani"});
    mpp.insert({103, "Parth"});

    cout << "Multimap Elements:\n";
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    auto it = mpp.find(102);
    if (it != mpp.end())
    {
        cout << "\nKey 102 Found: "
             << it->first << " -> " << it->second << endl;
    }

    cout << "\nSize = " << mpp.size() << endl;

    cout << "Empty = " << mpp.empty() << endl;

    return 0;
}