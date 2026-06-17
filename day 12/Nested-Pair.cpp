#include <iostream>
using namespace std;

int main()
{
    pair<int, pair<int, int>> p = {10, {20, 30}};

    cout << "First Value: " << p.first << endl;
    cout << "Second First Value: " << p.second.first << endl;
    cout << "Second Second Value: " << p.second.second << endl;

    return 0;
}