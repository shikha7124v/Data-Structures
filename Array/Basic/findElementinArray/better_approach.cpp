#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int hash[n+1] = {0};

        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(hash[i] == 0){
                return i;
            }
        }
        return -1;
    }

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