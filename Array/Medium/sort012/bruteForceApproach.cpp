#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = {1,0,0,1,2,1,2,0};
    int n = arr.size();
    sort012(arr, n);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}