#include<bits/stdc++.h>
using namespace std;
int selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] <arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {19,23,11,18,17,10};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}