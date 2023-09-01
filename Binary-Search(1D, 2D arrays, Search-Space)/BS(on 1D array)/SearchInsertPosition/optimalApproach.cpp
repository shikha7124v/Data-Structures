#include<bits/stdc++.h>
using namespace std;

int searchIndexPosition(vector<int> &arr, int ele){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= ele){
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1,2,4,5,7};
    int ele = 3;
    cout<<"The position of the element "<<ele<<" must be at index "<<searchIndexPosition(arr, ele);
    return 0;
}