// Using Linear Search 
#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(i*i <= n){
            ans = max(i, ans);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n; 
    cout<<squareRoot(n);
    return 0;
}