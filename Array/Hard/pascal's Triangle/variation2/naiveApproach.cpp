// In variation2 we have to print the particular nth row of the pascal's triangle
#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return (int)(res);
}
void getRow(int n){
    for(int c=1; c<=n; c++){
        cout<<nCr(n-1, c-1)<<" ";
    }
    cout<<"n";
}
int main()
{
    int n = 5;
    getRow(n);
    return 0;
}