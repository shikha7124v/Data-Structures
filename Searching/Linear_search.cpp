#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int num, int n)
{
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,30,20,11,12,28,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number to search: ";
    cin>>num;
    cout<<"The index of the searched number is "<<linearSearch(arr, num, n);
    return 0;
}