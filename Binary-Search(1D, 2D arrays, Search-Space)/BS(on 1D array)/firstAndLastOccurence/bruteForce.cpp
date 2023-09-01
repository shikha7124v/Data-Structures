#include<bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastOccurence(vector<int> arr, int n, int target){
    int first = -1;
    int last = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            first = i;
            break;
        }
    }
    for(int j=n; j>0; j--){
        if(arr[j] == target){
            last = j;
            break;
        }
    }
    return make_pair(first, last);
}
int main()
{
    vector<int> arr{1,2,3,4,4,5,6,4,7};
    int n = arr.size();
    int target = 4;
    pair<int, int> ans = firstAndLastOccurence(arr, n, target);
    cout<<ans.first;
    cout<<" ";
    cout<<ans.second;
    return 0;
}