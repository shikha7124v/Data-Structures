#include<bits/stdc++.h>
using namespace std;

int countInversions(vector<int> a, int n)
{
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                count += 1;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> a{5,1,2,3,1};
    int n = a.size();
    cout<<countInversions(a, n);
    return 0;
}