#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> arr, int n){
    int sum = (n*(n+1))/2;
    int s2 = 0;
    for(int i=0; i<n; i++){
        s2 += arr[i];
    }
    int missingEle = sum - s2;
    return missingEle;
}
int main()
{
    vector<int> arr = {1,2,3,0};
    int n = arr.size();

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"The element which is not present in the array is : "<<findElement(arr, n);
    return 0;
}