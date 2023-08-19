// Given an array of size N and an integer B. You have to find the number of subarrays, 
// so that the bitwise xor of all elements of the subarray is equal to B.
#include<bits/stdc++.h>
using namespace std;

int subArrayWithXorK(vector<int> a, int k)
{
    int n = a.size();
    int cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int xorr = 0;
            for(int K = i; K<=j; K++){
                xorr = xorr ^ a[K];
            }
            if(xorr == k) cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<int> a = {4,2,2,6,4};
    int k = 6;
    int ans = subArrayWithXorK(a, k);
    cout<<ans;
    return 0;
}