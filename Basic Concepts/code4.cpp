// 2nd largest no. 
#include<bits/stdc++.h>
using namespace std;

int largestSecond(int arr[], int n){
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    if(n == 0 || n == 1){
        return -1;
    }

    for(int i=0; i<n; i++){
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
        if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }
    cout<<second_large<<endl;
    cout<<second_small;
    return 0;
}
int main()
{
    int arr[] = {9,4,3,2,65,32,11};
    int n = 7;
    largestSecond(arr, n);
    return 0;
}