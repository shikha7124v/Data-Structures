// Optimal Approach1 - in this we will not use any extra space, here will take two pointers
// first will be initialized to the last element of the first array and second will be assigned 
// to the first element of the second array. {case 1 : arr1[left] > arr2[right] -> then swap both}
// {case 2 : if(arr1[left] < arr2[right]) -> means both the arrays are already arranged in sorted manner}

#include<bits/stdc++.h>
using namespace std;

int mergeSortedArraysWithoutSpace(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int left = n-1;
    int right = 0;

    while(left > -1 && right < m)
    {
        if(arr1[left] > arr2[right]){
            swap(arr1[left--], arr2[right++]);
        }
        else if(arr1[left] < arr2[right]){
            break;
        }
    }
    for(auto it: arr1){
        cout<<it<<" ";
    }
    for(auto x: arr2){
        cout<<x<<" ";
    }
    return 0;
}
int main()
{
    vector<int> arr1{1,3,5,6,7};
    vector<int> arr2{2,4,6,6,8};
    mergeSortedArraysWithoutSpace(arr1, arr2);
    return 0;
}