// An element in the array is said to be a leader if it will be greater than all the elements in it's right 
// last element will always be a leader
// return the vector containing all the leaders in sorted order 
#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int> arr){
    int n = arr.size();
    vector<int> leaders;

    for(int i=0; i<n; i++){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(arr[i] <= arr[j]){
                leader = false;
                break;
            }
        }
        if(leader){
            leaders.push_back(arr[i]);
        }
    }
    sort(leaders.begin(), leaders.end());
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
}