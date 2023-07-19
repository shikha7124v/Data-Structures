// Dutch National Flag Algorithm 
// This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

// arr[0….low-1] contains 0. [Extreme left part]
// arr[low….mid-1] contains 1.
// arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array
#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr, int n){
    int mid=0, low=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}
int main(){
    vector<int> arr{2,1,1,1,2,0,0,0,1,2,};
    int n = arr.size();
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort012(arr, n);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}