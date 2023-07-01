#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i, int n){
    if(i == n){
        return;
    }
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    insertion_sort(arr, i+1, n);
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr, 0, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}