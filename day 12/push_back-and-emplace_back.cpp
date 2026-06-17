#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(40);

    for(auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}