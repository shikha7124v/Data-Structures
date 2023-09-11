#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr){
    int n = arr.size();
    int low = 0, mid = 0;
    int high = n - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] > arr[mid+1]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int>arr{1,2,3,6,5,4};
    cout<<"The peak element = "<<peakElement(arr);
    return 0;
}