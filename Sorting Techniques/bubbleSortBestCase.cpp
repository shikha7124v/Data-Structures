//Bubble sort best case - when the array is already sorted then we can reduce the time complexity by applying a flag variable which will tell whether the swaping does happned or not 

#include<bits/stdc++.h>
using namespace std;

int bubbleSortBestCase(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int index = 0;
        for(int j=0; j<n; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                index = 1;
            }
        }
        if(index == 0){
            break;
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,13,2,16,22,15,11,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    bubbleSortBestCase(arr, n);
    return 0;
}