#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "aaBBDDddbbccEeA";
    vector<int> hash(123, 0);

    for(int i=0; i<str.size(); i++)
    {
        hash[str[i]]++;
    }
    for (auto it : hash){
        cout<<it<<" ";
    }

    return 0;

   
}