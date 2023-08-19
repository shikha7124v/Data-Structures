// Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to 0

#include<bits/stdc++.h>
using namespace std;

int largestSubarray(vector<int> arr, int n)
{
    int maxLen = 0;
    int sum = 0;
    unordered_map<int, int> sumIndexMap;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            maxLen = i+1;
        }
        else if(sumIndexMap.find(sum) != sumIndexMap.end()){
            maxLen = max(maxLen, i-sumIndexMap[sum]);
        }
        else{
            sumIndexMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    vector<int> arr{9,-3,3,-1,6,-5};
    int n = arr.size();
    int length = largestSubarray(arr, n);
    cout<<"The length of the largest subarray with sum equal to 0 is "<<length;
    return 0;
}