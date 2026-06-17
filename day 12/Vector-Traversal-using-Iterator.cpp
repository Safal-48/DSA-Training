#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40};

    for(auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}