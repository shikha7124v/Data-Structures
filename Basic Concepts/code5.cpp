// Check is array sorted or not 

#include<bits/stdc++.h>
using namespace std;

bool arraySorted(int arr[], int n){
    int ans;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            ans = 0;
        }
        else{
            ans = 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = arraySorted(arr, n);
    if(ans == 0){
        cout<<"Array is not sorted.";
    }
    else if(ans == 1){
        cout<<"Array is sorted.";
    }
    return 0;
}