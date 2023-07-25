#include<bits/stdc++.h>
using namespace std;

void setColZero(vector<vector<int>> &a, int n, int m, int i){
    for(int j=0; j<m; j++){
        if(a[i][j] != 0){
            a[i][j] = -1;
        }
    }
}
void setRowZero(vector<vector<int>> &a, int n, int m, int j){
    for(int i=0; i<n; i++){
        if(a[i][j] != 0){
            a[i][j] = -1;
        }
    }
}
void setZero(vector<vector<int>> &a, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 0){
                setColZero(a, n, m, i);
                setRowZero(a, n, m, j);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == -1){
                a[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> a = {{1,0,2},{2,3,0},{1,1,2}};
    int n = a.size();
    int m = a[0].size();
    for(auto it: a){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    setZero(a, n, m);
    for(auto itans: a){
        for(auto eleans: itans){
            cout<<eleans<<" ";
        }
        cout<<endl;
    }
    return 0;
}