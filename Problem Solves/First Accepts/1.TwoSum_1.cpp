#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> array;

    array = nums;
    sort(array.begin(), array.end());

    int c = 0;
    int b = 0;

    for (int i = array.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {

            if (i == j)
            {
                continue;
            }

            if (array[i] + array[j] == target)
            {
                c = array[i];
                b = 1;
                break;
            }
        }
        if (b == 1)
        {
            break;
        }
    }

    array.clear();

    if (b == 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == c || nums[i] == (target - c))
            {
                array.push_back(i);
            }
            if (array.size() == 2)
            {
                break;
            }
        }
    }

    return array;
}

int main()
{
    vector<int> nums = {10, 2, -2, 1, -123, 23, 4, -5};
    int target = 0;

    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}