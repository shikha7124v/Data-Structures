// Find the elements in the array whose count is greater than n/3 
#include<bits/stdc++.h>
using namespace std;
vector<int> findEle(vector<int> arr)
{
    int n = arr.size();
    vector<int> ls;
    for(int i=0; i<n; i++){
        if(ls.size() == 0 || ls[0] != arr[i]){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(arr[j] == arr[i]){
                    cnt++;
                }
            }
            if(cnt > n/3){
                ls.push_back(arr[i]);
            }
        }
        if(ls.size() == 2){
            break;
        }
    }
    return ls;
}
int main()
{
    vector<int> arr{1,1,2,3,3,3,4,4};
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> ans = findEle(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}