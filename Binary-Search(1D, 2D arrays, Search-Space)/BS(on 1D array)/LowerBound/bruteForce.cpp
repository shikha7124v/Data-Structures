// Simply using linear search to find the lower bound 
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int x)
{
    int n = arr.size();
    int lowerBoundEle = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= x){
            return i;
        }
    }
    return n;
}
int main()
{
    vector<int> arr{1,2,4,5,6,7,8};
    int x = 3;
    cout<<lowerBound(arr, x);
    return 0;
}