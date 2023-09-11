#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> arr){
    int n = arr.size();
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i]; //xor operation
    }
    return ans;
}
int main()
{
    vector<int> arr{1,1,2,2,3,3,4,5,5,6,6,7,7};
    cout<<singleElement(arr);
    return 0;
}