#include<bits/stdc++.h>
using namespace std;

bool peakElement(vector<int> arr){
    int low = 0, mid = 0;
    int high = arr.size() - 1;

    while(low < high){
        mid = (low+high)/2;
        if(arr[mid]>arr[mid+1]){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    cout<<peakElement(arr);
    return 0;
}