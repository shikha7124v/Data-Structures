#include<bits/stdc++.h>
using namespace std;

pair<int, int> floorAndCeiling(vector<int> &arr, int x, int n){
    int floor = -1;
    int ceil = -1;
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == x){
            return make_pair(x, x);
        }
        else if(arr[mid] < x){
            low = mid+1;
            floor = arr[mid];
        }
        else{
            high = mid - 1;
            ceil = arr[mid];
        }
    }
    return make_pair(floor, ceil);
}
int main()
{
    vector<int> arr{1,2,4,5,7,9};
    int n = arr.size();
    int x = 3;
    pair<int, int> ans = floorAndCeiling(arr, x, n);
    cout<<ans.first;
    cout<<ans.second;
    return 0;
}