// Problem Statement - You are given a strictly increasing array 'vec' and a positive integer 'k'. 
// Find the Kth positive missing from 'vec'.
#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> vec, int n, int k){
    for(int i=0; i<n; i++){
        if(vec[i] <= k) k++;
        else break;
    }
    return k;
}

int main()
{
    vector<int> vec = {4,7,9,10};
    int n = 4, k = 4;
    int ans = missing(vec, n, k);
    cout<<"The missing number is: "<<ans<<endl;
    return 0;
}