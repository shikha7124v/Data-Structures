#include<bits/stdc++.h>
using namespace std;

bool sortedAndRoated(vector<int> &nums){
    if(nums.size() == 1){
        return true;
    }
    int count;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1] > nums[0]){
        count++;
    }
    if(count <= 1){
        return true;
    }
    return false;
}
int main()
{
    vector<int> nums = {4,5,6,1,2,3};
    int n = nums.size();

    cout<<sortedAndRoated(nums);
    return 0;
}