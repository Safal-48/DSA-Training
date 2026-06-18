#include <bits/stdc++.h>
using namespace std;

int main()
{
    // By default: Max Heap - sabse bada element top pe
    priority_queue<int> pq;

    // Elements add karna
    pq.push(10);
    pq.push(60);
    pq.push(30);
    pq.emplace(40);
    pq.push(100);

    cout << "Top element: " << pq.top() << endl;  
    cout << "Size: " << pq.size() << endl;

    // Max Heap print
    cout << "Max Heap elements: ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;


    // -----------------------------
    // Min Heap
    // -----------------------------
    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(10);
    minpq.push(60);
    minpq.push(30);
    minpq.emplace(40);
    minpq.push(100);

    cout << "Min Heap Top: " << minpq.top() << endl;

    cout << "Min Heap elements: ";
    while (!minpq.empty())
    {
        cout << minpq.top() << " ";
        minpq.pop();
    }

    return 0;
}
    