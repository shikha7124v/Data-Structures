// Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.

#include<bits/stdc++.h>
using namespace std;

int minimumJumpCount(int arr[], int n){
    int jump = 0;
    int mx = 0;
    int pos = 0;
    for(int i=0; i<n; i++){
        mx = max(mx, i+arr[i]);
        if(i == pos){
            pos = mx;
            jump++;
        }
        if(pos >= n-1){
            return jump;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,3,4,5,9,1,2,3,4,5,6};
    int n = 11;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<minimumJumpCount(arr, n);
    return 0;
}