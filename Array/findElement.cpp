#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach - T.C. - O(n^2)
int findElement(vector<int> arr, int n)
{
    for(int i=1; i<=n; i++){
        int flag = 0; 
        for(int j=0; j<n-1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return -1;
}

// Better approach 

int main()
{
    vector<int> arr = {1,2,3,0};
    int n = arr.size();

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"The element which is not present in the array is : "<<findElement(arr, n);
    return 0;
}