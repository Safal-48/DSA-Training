#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int> temp;
    int k = 1;
    int n = v.size();

    k = k % n;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = k; i < n; i++)
    {
        v[i - k] = v[i];
    }

    int idx = 0;
    for (int i = n - k; i < n; i++)
    {
        v[i] = temp[idx];
        idx++;
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}