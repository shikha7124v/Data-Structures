// Rotate Array by d
#include<bits/stdc++.h>
using namespace std;

int rotateArray(vector<int> arr, int d){
    vector<int> temp;
    int n = arr.size();
    for(int i=0; i<d; i++){
        temp.push_back(arr[i]);
    }
    for(int i=d; i<=n; i++){
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<=n; i++){
        arr[i] = temp[i-(n-d)];
    }
    for(int i=n-d; i<=n; i++){
        reverse(arr.begin()+(n-d), arr.end());
    }
    // print
    for(int x: arr){
    cout<<x<<" ";
    }    
    return 0;
}

int main()
{
    vector<int> arr{4,5,1,2,3};
    int d = 2;
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    rotateArray(arr, d);
    return 0;
}
