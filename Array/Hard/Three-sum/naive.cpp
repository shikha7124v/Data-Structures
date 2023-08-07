#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr)
{
    int n = arr.size();
    set<vector<int>> st;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    vector<int> temp{arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans{st.begin(), st.end()};
    return ans;
}
int main()
{
    vector<int> arr{-1, 0, 1, 2, -1, -4};
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<vector<int>> threesumarr = threeSum(arr);
    for(auto it: threesumarr){
        cout << "[";
        for(auto ele: it){
            cout<<ele<<" ";
        }
    cout<<"]";
    }
    cout<<endl;
    return 0;
}