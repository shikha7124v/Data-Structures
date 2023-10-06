#include<bits/stdc++.h>
using namespace std;

int divisor(vector<int> arr, int n, int limit)
{
    int maxi = *max_element(arr.begin(), arr.end());
    for(int d=1; d<=maxi; d++){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += ceil((double)(arr[i] / (double)(d)));
        }
        if(sum <= limit){
            return d;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int n = arr.size();
    int limit = 8;
    cout<<"The smallest divisor is: "<<divisor(arr, n, limit);
    return 0;
}