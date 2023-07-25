// Find the number which appearce once in the array
// Naive Approach (Brute Force Approach) - Will do the linear search and count the occurences of the elements if the occurrence will be one will return that element.
#include<bits/stdc++.h>
using namespace std;

int appearceOnce(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        int num = arr[i];
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == num){
                cnt++;
            }
        }
        if(cnt == 1){
            return num;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{2,2,1};
    int n = arr.size();

    cout<<appearceOnce(arr, n);
    return 0;
}