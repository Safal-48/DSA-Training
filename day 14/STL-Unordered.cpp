#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> umap;

    umap.insert({101, "Saf"});
    umap.insert({102, "Ram"});
    umap.insert({103, "Shyam"});
    umap[104] = "Shwetank";

    cout << "Unordered Map Elements:\n";
    for (auto it : umap)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\nValue at Key 104 = "
         << umap[104] << endl;

    umap[102] = "Saf";

    auto it = umap.find(102);
    if (it != umap.end())
    {
        cout << "Key 102 Found: "
             << it->second << endl;
    }

    cout << "Count of Key 101 = "
         << umap.count(101) << endl;

    umap.erase(101);

    cout << "\nAfter Erasing Key 101:\n";
    for (auto x : umap)
    {
        cout << x.first << " -> "
             << x.second << endl;
    }

    cout << "\nSize = "
         << umap.size() << endl;

    cout << "Empty = "
         << umap.empty() << endl;

    return 0;
}