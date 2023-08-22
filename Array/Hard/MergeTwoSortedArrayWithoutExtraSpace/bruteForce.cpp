// Brute Force Appproach - here we are going to use an extra space, that will help us to understand 
// the optimal approaches

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2, int n, int m){
    vector<int> ans;
    int right = 0;
    int left = 0;
    while(left<n && right<m){
        if(arr1[left] < arr2[right]){
            ans.push_back(arr1[left++]);
        }
        else if(arr1[left] > arr2[right]){
            ans.push_back(arr2[right++]);
        }
        else if(arr1[left] == arr2[right]){
            ans.push_back(arr1[left++]);
        }
    }
    while(left < n){
        ans.push_back(arr1[left++]);
    }
    while(right < m){
        ans.push_back(arr2[right++]);
    }
    return ans;
}
int main()
{
    vector<int> arr1{1,3,4,5,8,9};
    vector<int> arr2{2,4,5,8,9,11};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans = mergeArrays(arr1, arr2, n, m);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}