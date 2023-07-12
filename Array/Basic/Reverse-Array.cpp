#include<bits/stdc++.h>
using namespace std;
int reverseTheArray(int start, int end, int n, int arr[])
{
    //iterative method 
    
    // while(start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }

    //recursive way
    if(start >= end){
        return 0;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp; 

    reverseTheArray(start+1, end-1, n, arr);
}
int main()
{
    int arr[] = {2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printf("Original array : \n");
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int start = 0; 
    int end = n-1;
    
    reverseTheArray(start, end, n, arr);
    printf("Reversed Array : \n");
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}