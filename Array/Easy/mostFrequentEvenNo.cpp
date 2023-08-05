// Find the most frequent even number in the given array 
#include<bits/stdc++.h>
using namespace std;

int mostFrequentEven(vector<int> arr){
    map<int, int> mpp;
    for(auto n: arr){
        mpp[n]++;
    }
    int ans = -1, mx = -1;
    for(auto m: mpp){
        if(m.first%2 == 0 && m.second > mx){
            ans = m.first;
            mx = m.second; 
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1,2,2,3,4,4,4,5,6};
    cout<<mostFrequentEven(arr);
    return 0;
}