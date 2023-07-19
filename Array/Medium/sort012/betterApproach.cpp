#include<bits/stdc++.h>
using namespace std;

vector<int> sort012(vector<int> &arr, int n){
    int count1 = 0, count2 = 0, count0 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0; i<count0; i++){
        arr[i] = 0;
    }
    for(int i=count0; i<count1+count0; i++){
        arr[i] = 1;
    }
    for(int i=count0+count1; i<n; i++){
        arr[i] = 2;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1,0,2,0,1,1,2,0,2};
    int n = arr.size();
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort012(arr, n);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}