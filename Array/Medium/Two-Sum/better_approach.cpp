// Using Hasing 
#include<bits/stdc++.h>
using namespace std;

string twoSum(vector<int>arr, int n, int target){
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return "Yes";
        }
        mpp[num] = i;
    }
    return "No";
}
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    int target = 10;
    int n = arr.size();
    cout<<twoSum(arr, n, target);
    return 0;
}