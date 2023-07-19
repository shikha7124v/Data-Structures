#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr, int n){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second >= floor(n/2)){
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,1,2,3,4,2,2,2};
    int n = arr.size();
    cout<<majorityElement(arr, n);
    return 0;
}