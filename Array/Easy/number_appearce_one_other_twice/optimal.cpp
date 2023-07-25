#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
    int n = arr.size();
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr^arr[i];
    }
    return xorr;
}
int main()
{
    vector<int> arr{1,2,3,2,3,4,5,4,5};
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<getSingleElement(arr);
    return 0;
}