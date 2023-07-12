#include<bits/stdc++.h>
using namespace std;

int oneIteration(int arr[], int n)
{
    sort(arr, arr + n);
    return (arr[n-1]+arr[n-2]);
}
int main()
{
    int arr[] = {1,-5,3,6,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = oneIteration(arr, n);
    cout<<sum;
    return 0;
}