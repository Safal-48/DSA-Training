#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> mpp;

    mpp.insert({101, "Safal"});
    mpp.emplace(102, "Parth");
    mpp[103] = "Shwetank";

    cout << "Map Elements:" << endl;
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\nValue at key 102: " << mpp[102] << endl;

    mpp[102] = "SP";

    if (mpp.find(102) != mpp.end())
    {
        cout << "Key 102 Found" << endl;
    }

    mpp.erase(103);

    cout << "\nAfter Update and Delete:" << endl;
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}