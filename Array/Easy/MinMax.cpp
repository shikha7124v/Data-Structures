#include<iostream>
#include<algorithm>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair findMinMax(int arr[], int n)
{
    Pair minmax;
    sort(arr,arr+n);
    minmax.min = arr[0];
    minmax.max = arr[n-1];
    return minmax;
}
int main()
{
    int arr[] = {2,1,4,3,6,41,42,8};
    int n = sizeof(arr)/sizeof(int);
    Pair getminmax = findMinMax(arr, n);
    cout<<"The min of arr is: "<<getminmax.min<<" ";
    cout<<endl;
    cout<<"The max of arr is: "<<getminmax.max;
}