#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==3)
        {
            continue; // Skip the rest of the loop when i is 3
        }
        cout << i << endl;
    }
    return 0;
}
