#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maximum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];

        if (currentSum > maximum)
        {
            maximum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maximum;
}

int main()
{

    vector<int> v = {5, 4, -1, 7, 8};

    cout << "Maximum Subarray Sum: " << maxSubArray(v) << endl;

    return 0;
}