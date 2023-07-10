// Minimum Subarray of fixed size
#include<bits/stdc++.h>
using namespace std;

int minSumofSubarray(int arr[], int n, int k){
    int i;
    int min_sum = 0;
    for(i=0; i<k; i++){
        min_sum += arr[i];
    }
    int sum = min_sum;
    for(;i<n; i++){
        sum += arr[i] - arr[i-k];
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    int k = 3; // Subarray of size 3
    cout<<endl;
    cout<<minSumofSubarray(arr, n, k);
    return 0;
}