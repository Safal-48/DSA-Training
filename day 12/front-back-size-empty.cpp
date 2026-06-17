#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40};

    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.size() << endl;
    cout << v.empty();

    return 0;
}