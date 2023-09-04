#include<bits/stdc++.h>
using namespace std;

int lastOcc(vector<int> arr, int n, int target)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    int mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == target){
            low = mid+1;
            ans = mid;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
        mid = (low+high)/2;
    }
    return ans;
}
int firstOcc(vector<int> arr, int n, int target)
{
    int low = 0;
    int high = n-1;
    int mid;
    int ans = -1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == target){
            high = mid-1;
            ans = mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        mid = (low+high)/2;
    }
    return ans;
}
pair<int, int> firstAndLast(vector<int> arr, int n, int target){
    int first = firstOcc(arr, n, target);
    int last = lastOcc(arr, n, target);
    return make_pair(first, last);
}
int main()
{
    vector<int> arr{1,2,3,4,4,5,6,7,4,8};
    int n = arr.size();
    int target = 4;
    pair<int, int> ans = firstAndLast(arr, n, target);
    cout<<ans.first;
    cout<<" ";
    cout<<ans.second;
    return 0;
}