#include<bits/stdc++.h>
using namespace std;

int getElement(vector<int> &arr){
    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }

    return -1;
}
int main()
{
    vector<int> arr{1,1,2,3,3};
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<getElement(arr);
    return 0;
}