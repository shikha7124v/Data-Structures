// We have find the minimum sum subarray of the given fixed size in the array
#include<bits/stdc++.h>
using namespace std;

int minSubarraySum(int arr[], int n, int k) 
{
    int i=0;    
    int min_sum=0;    
    for(i=0;i<k;i++)    
    {        
        min_sum+=arr[i];    
    }    
    int sum=min_sum;    
    for(;i<n;i++) 
    {        
        sum+=arr[i]-arr[i-k];        
        min_sum=min(min_sum,sum);    
        
    }    
    return min_sum; 
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;
    int n = 7;
    cout<<"Minimum sum of the subarray of size "<<k<<" is "<<minSubarraySum(arr, n, k);
    return 0;
}