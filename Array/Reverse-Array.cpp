#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printf("Original array : \n");
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //iterative method 
    int start = 0; 
    int end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printf("Reversed Array : \n");
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}