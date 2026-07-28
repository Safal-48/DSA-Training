#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {};
}

int main()
{
    vector<int> v = {2, 7, 11, 15};

    int target = 26;

    vector<int> ans = twoSum(v, target);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}