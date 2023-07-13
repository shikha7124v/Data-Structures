#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int> a, int n){
    int max_count = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        max_count = max(count, max_count);
    }
    return max_count;
}
int main()
{
    vector<int> a{1,1,0,1,1,1,0};
    int n = a.size();

    cout<<consecutiveOnes(a, n);
    return 0;
}