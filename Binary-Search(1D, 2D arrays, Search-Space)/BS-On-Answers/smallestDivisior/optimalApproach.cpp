#include<bits/stdc++.h>
using namespace std;

int sumfun(vector<int> arr, int div){
    int sum = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        sum += ceil((double)(arr[i])/(double)(div));
    }
    return sum;
}
int divisor(vector<int> arr, int n, int limit){
    if(n>limit) return -1;
    int maxi = *max_element(arr.begin(), arr.end());
    int high = maxi;
    int low = 1;
    while(low <= high){
        int mid = (high+low)/2;
        if(sumfun(arr,mid)<=limit){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int n = arr.size();
    int limit = 8;
    cout<<"The smallest divisor is : "<<divisor(arr, n, limit);
    return 0;
}