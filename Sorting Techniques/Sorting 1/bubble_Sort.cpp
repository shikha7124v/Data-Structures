// Works opposite to the selection sort. Pushes the maximum element at the back unlike selection sort which pushes the min element at the first
// Algorithm - run a loop from i = last element (n-1 index) to starting element (at 0), inside that run one more loop j from 0 to i-1, check wheather element at index j is greater than the element at index j+1 if yes then, swap
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    int arr[] = {19,11,23,1,5,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    bubblesort(arr, n);
    return 0;
}