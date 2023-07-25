#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int> arr){
    int n = arr.size();
    vector<int> leaders;
    int max = arr[n-1];
    leaders.push_back(max);
    for(int i=n-2; i>=0; i--){
        if(arr[i] > max){
            leaders.push_back(arr[i]);
            max = arr[i];
        }
    }
    return leaders;
}
int main()
{
    vector<int> arr{10, 22, 12, 3, 0, 6};
    vector<int> ans = leadersInArray(arr);
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}