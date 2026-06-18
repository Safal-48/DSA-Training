#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(10);

    dq.push_back(20);
    dq.push_back(30);

    cout << "Deque Elements: ";
    for(auto it : dq)
    {
        cout << it << " ";
    }

    cout << endl;

    dq.pop_front();

    dq.pop_back();

    cout << "After Deletion: ";
    for(auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}