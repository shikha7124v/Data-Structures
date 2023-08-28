// Implementation of Binary Search algorithm for using iterative approach
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target, int low, int high){
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target)  return mid;
        else if(target > nums[mid]) return binarySearch(nums, target, mid+1, high);
        else if(target < nums[mid]) return binarySearch(nums, target, low, mid-1);
    }
    return -1;
}
int main()
{
    vector<int> nums{1,4, 5, 6, 8, 9};
    int n = nums.size();
    int target = 4;
    cout<<"The index where the element found using BinarySearch is "<<binarySearch(nums, target, 0, n-1);
    return 0;
}