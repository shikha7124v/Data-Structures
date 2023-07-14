// You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

// pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
// Note that ^ denotes the bitwise-xor operation.

// It can be proven that the answer is unique.

#include<bits/stdc++.h>
using namespace std;

vector<int> findArray(vector<int> &pref){
    int n = pref.size();
    int x = pref[0], y;
    for(int i=0; i<n; i++){
        y = pref[i];
        pref[i] = (pref[i] ^ x);
        x = y;
    }
    return pref;
}
int main()
{
    vector<int> pref{5,2,0,3};
    findArray(pref);
    for(auto it: pref){
        cout<<it<<" ";
    }
    return 0;
}