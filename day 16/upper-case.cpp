#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str = "ABBEBCEDDBAA";
    vector<int> hash(26, 0);

    for(int i = 0; i < str.size(); i++) {
        hash[str[i] - 'A']++;
    }

    cout << hash['B' - 'A'];

    return 0;
}