// using hashing 
#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedAndMissing(vector<int> a){
    int n = a.size();
    int hash[n+1] = {0};

    for(int i=0; i<n; i++){
        hash[a[i]]++;
    }
    int repeated = -1, missing = -1;

    for(int i=1; i<=n; i++){
        if(hash[i] == 2) repeated = i;
        else if(hash[i] == 0) missing = i;

        if(repeated != -1 && missing != -1){
            break;
        }
    }
    return {repeated, missing};
}
int main()
{
    vector<int> a{3,1,2,5,4,6,7,5};
    vector<int> ans = repeatedAndMissing(a);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}