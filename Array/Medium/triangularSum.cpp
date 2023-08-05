// You are given a 0-indexed integer array nums, where nums[i] is a digit between 0 and 9 (inclusive).

// The triangular sum of nums is the value of the only element present in nums after the following process terminates:

// Let nums comprise of n elements. If n == 1, end the process. Otherwise, create a new 0-indexed integer array newNums of length n - 1.
// For each index i, where 0 <= i < n - 1, assign the value of newNums[i] as (nums[i] + nums[i+1]) % 10, where % denotes modulo operator.
// Replace the array nums with newNums.
// Repeat the entire process starting from step 1.
// Return the triangular sum of nums.

#include<bits/stdc++.h>
using namespace std;

int triangularSum(vector<int> arr, int n)
{
    while(n>1){
        vector<int> v;
        for(int i=0; i<n-1; i++){
            v.push_back((arr[i]+arr[i+1])%10);
        }
        --n;
        arr = v;
    }
    return arr[0];
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int n = arr.size();
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int sum = triangularSum(arr, n);
    cout<<"Triangular sum of the array is :"<<sum<<endl;
    return 0;
}