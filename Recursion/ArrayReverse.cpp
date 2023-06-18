//Reverse the array using recursion
#include<bits/stdc++.h>
using namespace std;

int reverse(int n, int arr[], int i)
{
    if(i>=n/2)
    {
        return 0;
    }
    swap(arr[i], arr[n-i-1]);
    reverse(n, arr, i+1);
    return 0;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(n, arr, 0);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}