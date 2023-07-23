// Problem - Given an integer array arr, find the contiguous subarray (containing at least one number ) which has the largest sum and returns its sum and prints the subarray
// Brute Force Approach - Time Complexity - O(n^2)
#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> arr, int n){
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    if(maxSum < 0){
        return 0;
    }
    return maxSum;
}
int main()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"The max sum of subarray is "<<maxSubarraySum(arr, n);
    return 0;
}