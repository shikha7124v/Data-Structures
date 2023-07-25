// Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.
// In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.
// Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>&arr, int n, long long s){
    vector<int> ans;
    int left = 0, right = 0;
    int sum = 0;
    if(s == 0){
        ans.push_back(-1);
        return ans;
    }
    while(right<n){
        sum += arr[right];
        right++;
        while(sum > s){
            sum -= arr[left];
            left++;
        }
        if(sum == s){
            ans.push_back(left+1);
            ans.push_back(right+1);
            return ans;
        }
        right++;
    }
    ans.push_back(-1);
    return ans;
}
int main()
{
    vector<int> arr{1,2,1,3,4,3,5,6,3};
    int n = arr.size();
    long long s = 9;
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    subarraySum(arr, n, s);
    return 0;
}