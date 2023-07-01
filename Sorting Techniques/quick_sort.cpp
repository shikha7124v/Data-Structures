// Simple Rule of Quick sort 
// 1. Partition function with put the pivot element at it's correct place 
// 2. In the left hand side of the pivot element it should be smaller elements and on the right side of the pivot it should be greater elements 

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(arr[i] <= pivot && i <= high-1){
        i++;
    }
    while(arr[j] > pivot && j >= low+1){
        j--;
    }
    if(i < j){
        swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int index = partition(arr, low, high);
        qs(arr, low, index);
        qs(arr, index + 1, high);
    }
}

int main()
{
    vector<int> arr = {9,7,44,5,12,1,3,2};
    cout<<"Before Sorting : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    qs(arr, 0, arr.size() - 1);
    cout<<"After Sorting : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}