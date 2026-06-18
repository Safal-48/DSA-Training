#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(60);
    st.emplace(30);   
    st.push(40);

    cout << "Top element: " << st.top() << endl; 

  
    cout << "Stack elements: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    st.push(100);
    st.push(200);
    
    cout << "Size after pushing: " << st.size() << endl;  
    st.pop();
    cout << "Top after pop: " << st.top() << endl;       

    return 0;
}