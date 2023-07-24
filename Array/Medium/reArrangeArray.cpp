// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should rearrange the elements of nums such that the modified array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include<bits/stdc++.h>
using namespace std;

vector<int> modifiedArray(vector<int> nums){
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++){
        if(nums[i] > 0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    for(int i=0; i<n/2; i++){
        nums[2*i] = pos[i];
        nums[(2*i)+1] = neg[i];
    }
    for(int i: nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return nums;
}
int main()
{
    vector<int> nums{1,-2,-3,4,5,-5};
    modifiedArray(nums);
    return 0;
}