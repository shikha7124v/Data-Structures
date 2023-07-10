#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int num)
{
    if(n == 0)   //base case
    {
        return -1;
    }
    if(arr[n-1] == num){
        return n-1;
    }
    return linearSearch(arr, n-1, num);
}
int main()
{
    int arr[] = {10, 30, 20, 11, 12, 28, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int num;
    cin>>num;
    cout<<linearSearch(arr, n, num);
    return 0;
}