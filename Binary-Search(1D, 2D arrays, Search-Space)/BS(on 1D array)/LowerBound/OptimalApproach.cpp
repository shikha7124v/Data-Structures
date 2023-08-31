// Using Binary Search 
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int x, int low, int high)
{
    int ans = arr.size();
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x){
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{3, 5, 8, 15, 19};
    int x = 9;
    cout<<lowerBound(arr, x, 0, arr.size()-1);
    return 0;
}