#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZero(vector<vector<int>> &arr, int n, int m){
    int row[n] = {0};
    int col[m] = {0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = arr.size();
    int m = arr[0].size();
    for(auto x: arr){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> ans = setMatrixZero(arr, n, m);
    cout<<endl;
    for(auto x: ans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}