#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target)
{
    int n = nums.size();
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    return {first, last};
}

int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 10};

    int target = 7;

    vector<int> result = searchRange(v, target);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}