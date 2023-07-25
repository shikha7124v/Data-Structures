#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr){
    next_permutation(arr.begin(), arr.end());
    return;
}
int main()
{
    vector<int> arr{2, 1, 5, 4, 3, 0, 0};
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    nextPermutation(arr);
    for(int z: arr){
        cout<<z<<" ";
    }
    return 0;
}