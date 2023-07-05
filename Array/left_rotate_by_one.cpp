#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n, int k){
    k = k%n;
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftRotateByOne(arr, n, k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}