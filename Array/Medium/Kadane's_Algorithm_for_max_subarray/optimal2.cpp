#include<bits/stdc++.h>
using namespace std;

void maxsumSubarray(int arr[], int n){
    long long maxSum = LONG_MIN;
    long long sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i=0; i<n; i++){
        if(sum == 0){
            start = i;
        }
        sum += arr[i];
        if(sum > maxSum){
            maxSum = sum;

            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    cout<<"The subarray is :"<<endl;
    for(int i=ansStart; i<=ansEnd; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxsumSubarray(arr, n);
    return 0;
}