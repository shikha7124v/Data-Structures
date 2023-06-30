// In insertion sort every element is inserted to it's right place

#include<bits/stdc++.h>
using namespace std;

int insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int arr[] = {9,4,2,6,7,12,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr, n);
    return 0;
}