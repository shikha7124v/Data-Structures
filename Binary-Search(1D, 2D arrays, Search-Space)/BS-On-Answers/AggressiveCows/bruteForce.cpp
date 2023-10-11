// Problem Statement - We are given an array 'stall' in which the elements are denoting the position of the stall, and an integer 'k' which denotes the number of aggressive cows. We have to put the aggressive cows in such a way that the minimum distance between them should be maximum.
// Naive Approach - To check the possible distance from 1 to max(stall[]) - min(stall[]). The maximum distance for which the function 'canWePlace()' returns true, will be the answer.

#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int cows){
    int n = stalls.size();
    int cntCows = 1; //no. of cows placed
    int last = stalls[0];
    for(int i=1; i<n; i++){
        if(stalls[i] - last >= dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());

    int limit = stalls[n-1] - stalls[0];

    for(int i=1; i<=limit; i++){
        if(canWePlace(stalls, i, k) == false){
            return (i-1);
        }
    }
    return limit;
}
int main()
{
    vector<int> stalls = {0,3,4,7,10,9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout<<"The maximum possible minimum distance is: "<<ans<<endl;
    return 0;
}