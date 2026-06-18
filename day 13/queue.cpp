#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(60);
    q.push(30);
    q.emplace(40);   

    cout << "Front element: " << q.front() << endl;  
    cout << "Rear element: " << q.back() << endl;    
    cout << "Size: " << q.size() << endl;            

    cout << "Queue elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();  
    }
    cout << endl;

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;  

    q.push(100);
    q.push(200);
    cout << "New front: " << q.front() << endl;  

    return 0;
}