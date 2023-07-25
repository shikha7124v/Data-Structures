// Return the length of the largest subarray whose sum is equal to the given sum in the given program
#include<bits/stdc++.h>
using namespace std;

// Brute Force Approch - three loops - O(n^3)
// int lengthOfLongestSubarray(vector<int> arr, int n, int s)
// {
//     int len = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int sum = 0;
//             for(int k=i; k<=j; k++){
//                 sum += arr[k];
//             }
//             if(sum == s){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }

// Optimizing Brute Force Approch - Using two loops - O(n^2)
// int lengthOfLongestSubarray(vector<int>arr, int n, long long s){
//     int len = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if(sum == s){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }

// Better Approach - Using Hashing 
int lengthOfLongestSubarray(vector<int> arr, int n, long long s){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum == s){
            maxLen = max(maxLen, i+1);
        }
        // calculate the sum of the remaining part
        long long rem = sum - s;

        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    vector<int> arr{1,1,2,3,4,3,1,1,1};
    int n = arr.size();
    int s = 4;
    cout<<lengthOfLongestSubarray(arr, n, s);
    return 0;
}