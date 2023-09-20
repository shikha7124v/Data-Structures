// Nth root of the number m
#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n, int m){
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(pow(i,m) <= n){
            ans = max(i, ans);
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cout<<"Enter the number: ";
    cin>>m;
    cout<<"Enter the the root: ";
    cin>>n; 
    cout<<nthRoot(n, m);
    return 0;
}