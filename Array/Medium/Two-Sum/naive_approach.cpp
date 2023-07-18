#include<bits/stdc++.h>
using namespace std;
string twoSum(vector<int> arr, int n, int sum){
    int i=0, j=1;
    vector<int>ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == sum){
                ans.push_back(i);
                ans.push_back(j);
                for(int x: ans){
                    cout<<x<<" ";
                }
                cout<<endl;
                return "Yes";
            }
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    for(int x: ans){
        cout<<x<<" ";
    }
    return "No";
}
int main()
{
    vector<int> arr{2,6,5,8,11};
    int sum = 14;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<twoSum(arr, n, sum);
    return 0;
}