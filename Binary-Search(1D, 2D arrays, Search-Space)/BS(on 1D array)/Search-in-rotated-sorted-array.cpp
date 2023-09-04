#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int>& arr, int n){
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;
    while(low < high){
        if(arr[mid] >= arr[0]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
        mid = (low + high)/2;
    }
    return low;
}
int binarySearch(vector<int>& arr, int start, int end, int key){
    int low = start;
    int high = end;
    int mid = (low + high)/2;
    while(low <= high){
        if(arr[mid] == key) return mid;

        if(key > arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = (low + high)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int x){
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}