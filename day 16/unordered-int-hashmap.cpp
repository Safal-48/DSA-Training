#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-1, -3, 4, 5, -3, 7, 8, 3, 2, -1, 3};

    unordered_map<int, int> hashmap;

    for(int i = 0; i < arr.size(); i++)
    {
        hashmap[arr[i]]++;
    }

    for(auto it : hashmap)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}