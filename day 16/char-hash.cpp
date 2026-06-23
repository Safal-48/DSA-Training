#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abacaba";

    int hash[26] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(hash[i] > 0)
        {
            cout << char(i + 'a') << " -> " << hash[i] << endl;
        }
    }








    

    return 0;
}