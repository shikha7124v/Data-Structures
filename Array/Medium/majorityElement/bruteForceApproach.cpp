//An element in the array is said to be a majority element if it's count is greater than or eual to the floor(n/2), where n is the number of the elements

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt >= floor(n/2)){
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,1,3,1,1,2,5,1};
    int n = arr.size();
    cout<<majorityElement(arr, n);
    return 0;
}
