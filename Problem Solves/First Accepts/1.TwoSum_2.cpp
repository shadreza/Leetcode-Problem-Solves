#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    int a = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                nums.clear();
                nums.push_back(i);
                nums.push_back(j);
                a = 1;
                break;
            }
        }
        if (a == 1)
        {
            break;
        }
    }

    return nums;
}

int main()
{
    vector<int> nums = {10, 2, 5, 1, -123, 23, 4, -5};
    int target = 0;

    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}