// Using Hashing 
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityEle(vector<int> arr){
    vector<int> ls;
    map<int, int> mpp;
    int n = arr.size();
    int mini = int(n/3)+1;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;

        if(mpp[arr[i]] >= mini){
            ls.push_back(arr[i]);
        }

        if(ls.size() == 2){
            break;
        }
    }
    return ls;
}
int main()
{
    vector<int> arr{1,2,2,3,4,3,3};
    vector<int> ans = majorityEle(arr);
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}