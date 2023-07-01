// Bubble sort using recursion 
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    
    if(n == 1){
        return;
    }

    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    bubble_sort(arr, n-1);
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}