#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return;
    }
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
    }
    sort(nums.begin(), nums.end());
    for (int i = count; i < n; i++)
    {
        nums[i - count] = nums[i];
    }
    for (int i = n; i >= n - count; i--)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums{0,1,4,3,0};
    int n = nums.size();

    for (auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
    moveZeroes(nums);
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}