// Return the length of the largest subarray whose sum is equal to the given sum in the given program
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubarray(vector<int> arr, int n, int s)
{
    int len = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(sum == s){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> arr{1,1,2,3,4,3,1,1,1};
    int n = arr.size();
    int s = 4;
    cout<<lengthOfLongestSubarray(arr, n, s);
    return 0;
}